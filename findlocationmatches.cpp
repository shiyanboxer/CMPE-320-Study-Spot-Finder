#include "findlocationmatches.h"
#include "ui_findlocationmatches.h"
#include "login.h"
#include "user.h"
#include "address.h"
#include "initialize.h"
#include "loginPage.h"


#include <QMessageBox>
#include <QFile>
#include <QObject>
#include <QFileDialog>



findLocationMatches::findLocationMatches(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::findLocationMatches)
{
    ui->setupUi(this);

    QFont font("Helvetica", 11, 75);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->label_4->setFont(font);
    ui->label_5->setFont(font);
    ui->label_7->setFont(font);
    ui->label_8->setFont(font);
    ui->label_9->setFont(font);
    ui->label_10->setFont(font);
    ui->wifi->setFont(font);
    ui->power->setFont(font);
    ui->equipment->setFont(font);
    ui->volumeLevel->setFont(font);
    ui->InOrOut->setFont(font);
    ui->closeProgram->setFont(font);
    ui->findMatches->setFont(font);
    ui->logout->setFont(font);

    // fill in inOrOut combobox
    ui->InOrOut->addItem("Indoor");
    ui->InOrOut->addItem("Outdoor");
    ui->InOrOut->addItem("Either");

    //fill in volume level
    for (int i = 1; i <= 10; i++) {
        QString s = QString::number(i);
        ui->volumeLevel->addItem(s);
    }

}

findLocationMatches::~findLocationMatches()
{
    delete ui;
}

list<Location> createValidList(list<Location> allLocations, User u) { //function to return a list of valid locations for a given user u
    list<Location> validLocations;
    for (std::list<Location>::iterator it = allLocations.begin(); it != allLocations.end(); ++it) { //iterate through all locations
        //Location loc(it);
        if ((*it).checkPreferences(u) == true)
            validLocations.push_back(*it);
    }
    return validLocations;
}

void findLocationMatches::on_findMatches_clicked()
{

    QString longitude = ui->longitude->text();
    float longit = longitude.toFloat();
    QString latitude = ui->latitude->text();
    float lat = latitude.toFloat();
    QString addressName = ui->addressName->text();
    std::string addressStr = addressName.toStdString();
    Address userAddress(longit, lat, addressStr);

    int vol = ui->volumeLevel->currentIndex();
    vol++;  //the value is one more than the index
    int inOrOutIndex = ui->InOrOut->currentIndex();
    string inOrOut;
    if (inOrOutIndex == 0) {
        inOrOut = "inside";
    }
    else if (inOrOutIndex == 1) {
        inOrOut = "outside";
    }
    else {
        inOrOut = "either";
    }

    QString maxDistance = ui->maxDistance->text();
    double maxTravelDistance = maxDistance.toDouble();

    bool wifi, power, equipment;
    if (ui->wifi->isChecked()) {
        wifi = true;
    }
    else {
        wifi = false;
    }
    if (ui->power->isChecked()) {
        power = true;
    }
    else {
        power = false;
    }
    if (ui->equipment->isChecked()) {
        equipment = true;
    }
    else{
        equipment = false;
    }

    User currentUser(vol, userAddress, inOrOut, wifi, power, equipment, maxTravelDistance, Login("randomusername", "randompassword"));

    //Initialize initialize;
    list <Location> allLocations; //list of all locations
    list <Location> validLocations; //list of locations that meet the user specified criteria


//    string s = "/kingstonStudySpots.txt";
//    int n = s.length();

//        // declaring character array
//        char char_array[n + 1];

//        // copying the contents of the
//        // string to char array
//        strcpy(char_array, s.c_str());

    //Location testLocation(10, Address(1, 1, "TEST"), "inside", true, true, true, 10, 0);
    Location loc1(7, Address(44.233392574879026, -76.49813532829286, "Victoria Park - Brock & Alfred"), "outside", false, false, false, 12, 0);
    Location loc2(4, Address(44.230220, -76.481591, "Crave Coffee House - 166 Princess St"), "inside", true, true, false, 12, 0);
    Location loc3(3, Address(44.230195, -76.484764, "Springer Market Square - 216 Ontario St"), "outside", false, false, false, 30, 5);
    Location loc4(7, Address(44.229883, -76.494269, "Queen's ARC - 284 Earl St"), "inside", true, true, false, 45, 37);
    Location loc5(5, Address(44.228135, -76.494265, "Tea Room - 45 Union St"), "inside", true, true, false, 12, 4);
    Location loc6(8, Address(44.2377, -76.5030, "The Yellow Deli - 647 Princess St"), "inside", false, true, false, 15, 4);
    Location loc7(1, Address(44.22888739806, -76.49625182588, "Stauffer Library - 101 Union St"), "inside", true, true, false, 100, 50);
    Location loc8(5, Address(44.2964, -76.3149, "Grass Creek Park - 2993 Kingston 2"), "outside", false, false, false, 20, 5);
    Location loc9(8, Address(44.259819, -76.580118, "Eggsquis Kingston - 2774 Princess St"), "inside", false, false, false, 35, 7);
    Location loc10(6, Address(44.23262, -76.488523, "Melt & Grill - 292 Princess Street"), "inside", true, false, false, 10, 3);
    Location loc11(7, Address(44.2305, -76.4807, "Casa Domenico - 35 Brock St"), "inside", true, false, false, 27, 6);
    Location loc12(6, Address(44.2654, -76.5024, "Panera Bread - 88 Dalton Avenue"), "inside", true, true, false, 25, 6);

    //allLocations.push_back(testLocation);
    allLocations.push_back(loc1);
    allLocations.push_back(loc2);
    allLocations.push_back(loc3);
    allLocations.push_back(loc4);
    allLocations.push_back(loc5);
    allLocations.push_back(loc6);
    allLocations.push_back(loc7);
    allLocations.push_back(loc8);
    allLocations.push_back(loc9);
    allLocations.push_back(loc10);
    allLocations.push_back(loc11);
    allLocations.push_back(loc12);

    //QString fileName = QFileDialog::getOpenFileName(this,tr("kingstonStudySpots"),"",tr("TXT(*.txt)"));
    //allLocations = initialize.createList(fileName); //return a list of all locations (reading data from input file)
    validLocations = createValidList(allLocations, currentUser); //return a list of all locations that meet the preference criteria

    if (validLocations.size() == 0) {
        ui->output->append("Sorry, no locations with these requirements were found within your max distance.");
    }
    else {
        ui->output->append("Here are the names of the locations that meet your requirements:\n");
        for (Location loc : validLocations) {
            string outputMessage = loc.getLocation().getAddressName();
            QString qstr = QString::fromStdString(outputMessage);
            ui->output->append(qstr);
        }
    }
}

void findLocationMatches::on_logout_clicked()
{
    //make user log out, or does this happen already?
    hide();
    LoginPage *loginPage = new LoginPage(this);
    loginPage->show();
}


