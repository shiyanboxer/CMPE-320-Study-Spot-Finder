/********************************************************************************
** Form generated from reading UI file 'studyspotgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYSPOTGUI_H
#define UI_STUDYSPOTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudySpotGUI
{
public:
    QWidget *centralwidget;
    QOpenGLWidget *openGLWidget;
    QTableView *tableView;
    QLabel *label_11;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QSlider *horizontalSlider;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudySpotGUI)
    {
        if (StudySpotGUI->objectName().isEmpty())
            StudySpotGUI->setObjectName(QString::fromUtf8("StudySpotGUI"));
        StudySpotGUI->resize(1061, 560);
        centralwidget = new QWidget(StudySpotGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 0, 1061, 41));
        openGLWidget->setStyleSheet(QString::fromUtf8("background-color: #413FB4;"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 110, 941, 391));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(90, 120, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat SemiBold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_11->setFont(font);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(90, 180, 161, 20));
        checkBox->setFont(font);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(90, 340, 161, 20));
        checkBox_2->setFont(font);
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(90, 300, 161, 20));
        checkBox_3->setFont(font);
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(90, 260, 161, 20));
        checkBox_4->setFont(font);
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(90, 220, 161, 20));
        checkBox_5->setFont(font);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(90, 430, 341, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(90, 380, 171, 31));
        label_12->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(90, 460, 141, 31));
        label_13->setFont(font);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(410, 460, 141, 31));
        label_14->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(840, 430, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat SemiBold"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #413FB4;\n"
"color: white;"));
        StudySpotGUI->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(StudySpotGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StudySpotGUI->setStatusBar(statusbar);

        retranslateUi(StudySpotGUI);

        QMetaObject::connectSlotsByName(StudySpotGUI);
    } // setupUi

    void retranslateUi(QMainWindow *StudySpotGUI)
    {
        StudySpotGUI->setWindowTitle(QCoreApplication::translate("StudySpotGUI", "StudySpotGUI", nullptr));
        label_11->setText(QCoreApplication::translate("StudySpotGUI", "Preferences", nullptr));
        checkBox->setText(QCoreApplication::translate("StudySpotGUI", "Power", nullptr));
        checkBox_2->setText(QCoreApplication::translate("StudySpotGUI", "Outside", nullptr));
        checkBox_3->setText(QCoreApplication::translate("StudySpotGUI", "Equipment", nullptr));
        checkBox_4->setText(QCoreApplication::translate("StudySpotGUI", "Internet", nullptr));
        checkBox_5->setText(QCoreApplication::translate("StudySpotGUI", "Volume Level", nullptr));
        label_12->setText(QCoreApplication::translate("StudySpotGUI", "Max Distance (km)", nullptr));
        label_13->setText(QCoreApplication::translate("StudySpotGUI", "0", nullptr));
        label_14->setText(QCoreApplication::translate("StudySpotGUI", "10", nullptr));
        pushButton->setText(QCoreApplication::translate("StudySpotGUI", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudySpotGUI: public Ui_StudySpotGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYSPOTGUI_H
