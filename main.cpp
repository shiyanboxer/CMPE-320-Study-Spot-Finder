#include "loginPage.h"

#include <QApplication>
#include <QGroupBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet("QGroupBox::title{ color: white }"); //QGroupBox white title
    LoginPage w;
    w.show();
    return a.exec();
}
