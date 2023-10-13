/********************************************************************************
** Form generated from reading UI file 'qrl_meters_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRL_METERS_MANAGER_H
#define UI_QRL_METERS_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qwt_counter.h"

QT_BEGIN_NAMESPACE

class Ui_QRL_MetersManager
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *helpButton;
    QSpacerItem *spacerItem1;
    QPushButton *closeButton;
    QSpacerItem *spacerItem2;
    QListWidget *meterListWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QCheckBox *showCheckBox;
    QLabel *frameLabel;
    QwtCounter *rrCounter;
    QLabel *minLabel;
    QwtCounter *minCounter;
    QLabel *maxLabel;
    QwtCounter *maxCounter;
    QComboBox *meterComboBox;
    QSpacerItem *spacerItem3;
    QWidget *ThermoOptions;
    QPushButton *thermoColor1PushButton;
    QComboBox *directionComboBox;
    QLabel *label;
    QwtCounter *pipeWithCounter;
    QPushButton *thermoColor2PushButton;
    QComboBox *colorComboBox;
    QCheckBox *alarmCheckBox;
    QwtCounter *alarmLevelCounter;
    QLabel *label_3;
    QPushButton *alarmThermoColor1PushButton;
    QPushButton *alarmThermoColor2PushButton;
    QWidget *DialOptions;
    QPushButton *dialColorPushButton;
    QWidget *LcdOptions;
    QPushButton *fontPushButton;
    QComboBox *formatComboBox;
    QLabel *label_4;
    QwtCounter *precisionCounter;

    void setupUi(QDialog *QRL_MetersManager)
    {
        if (QRL_MetersManager->objectName().isEmpty())
            QRL_MetersManager->setObjectName("QRL_MetersManager");
        QRL_MetersManager->resize(400, 277);
        QRL_MetersManager->setMinimumSize(QSize(400, 277));
        QRL_MetersManager->setMaximumSize(QSize(400, 277));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/meter_icon.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        QRL_MetersManager->setWindowIcon(icon);
        gridLayout = new QGridLayout(QRL_MetersManager);
        gridLayout->setObjectName("gridLayout");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        helpButton = new QPushButton(QRL_MetersManager);
        helpButton->setObjectName("helpButton");

        hboxLayout->addWidget(helpButton);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeButton = new QPushButton(QRL_MetersManager);
        closeButton->setObjectName("closeButton");

        hboxLayout->addWidget(closeButton);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);


        gridLayout->addLayout(hboxLayout, 1, 1, 1, 1);

        meterListWidget = new QListWidget(QRL_MetersManager);
        meterListWidget->setObjectName("meterListWidget");
        meterListWidget->setBaseSize(QSize(100, 0));

        gridLayout->addWidget(meterListWidget, 0, 0, 2, 1);

        tabWidget = new QTabWidget(QRL_MetersManager);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setObjectName("gridLayout1");
        showCheckBox = new QCheckBox(tab);
        showCheckBox->setObjectName("showCheckBox");

        gridLayout1->addWidget(showCheckBox, 0, 0, 1, 3);

        frameLabel = new QLabel(tab);
        frameLabel->setObjectName("frameLabel");

        gridLayout1->addWidget(frameLabel, 1, 0, 1, 2);

        rrCounter = new QwtCounter(tab);
        rrCounter->setObjectName("rrCounter");
        rrCounter->setEnabled(false);
        rrCounter->setNumButtons(1);
        rrCounter->setProperty("basicstep", QVariant(0.100000000000000));
        rrCounter->setMinimum(0.100000000000000);
        rrCounter->setMaximum(50.000000000000000);
        rrCounter->setValue(20.000000000000000);

        gridLayout1->addWidget(rrCounter, 1, 2, 1, 1);

        minLabel = new QLabel(tab);
        minLabel->setObjectName("minLabel");

        gridLayout1->addWidget(minLabel, 2, 0, 1, 1);

        minCounter = new QwtCounter(tab);
        minCounter->setObjectName("minCounter");
        minCounter->setNumButtons(0);
        minCounter->setProperty("basicstep", QVariant(0.500000000000000));
        minCounter->setMinimum(-2147483647.000000000000000);
        minCounter->setMaximum(2147483647.000000000000000);
        minCounter->setStepButton1(10);
        minCounter->setStepButton2(100);
        minCounter->setStepButton3(1000);
        minCounter->setValue(-1.000000000000000);

        gridLayout1->addWidget(minCounter, 2, 1, 1, 2);

        maxLabel = new QLabel(tab);
        maxLabel->setObjectName("maxLabel");

        gridLayout1->addWidget(maxLabel, 3, 0, 1, 1);

        maxCounter = new QwtCounter(tab);
        maxCounter->setObjectName("maxCounter");
        maxCounter->setNumButtons(0);
        maxCounter->setProperty("basicstep", QVariant(0.500000000000000));
        maxCounter->setMinimum(-2147483647.000000000000000);
        maxCounter->setMaximum(2147483647.000000000000000);
        maxCounter->setStepButton1(10);
        maxCounter->setStepButton2(100);
        maxCounter->setStepButton3(1000);
        maxCounter->setValue(1.000000000000000);

        gridLayout1->addWidget(maxCounter, 3, 1, 1, 2);

        meterComboBox = new QComboBox(tab);
        meterComboBox->addItem(QString());
        meterComboBox->addItem(QString());
        meterComboBox->addItem(QString());
        meterComboBox->setObjectName("meterComboBox");

        gridLayout1->addWidget(meterComboBox, 4, 0, 1, 3);

        spacerItem3 = new QSpacerItem(207, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem3, 5, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        ThermoOptions = new QWidget();
        ThermoOptions->setObjectName("ThermoOptions");
        thermoColor1PushButton = new QPushButton(ThermoOptions);
        thermoColor1PushButton->setObjectName("thermoColor1PushButton");
        thermoColor1PushButton->setGeometry(QRect(10, 50, 83, 27));
        directionComboBox = new QComboBox(ThermoOptions);
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->setObjectName("directionComboBox");
        directionComboBox->setEnabled(false);
        directionComboBox->setGeometry(QRect(10, 20, 72, 22));
        label = new QLabel(ThermoOptions);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 90, 57, 18));
        pipeWithCounter = new QwtCounter(ThermoOptions);
        pipeWithCounter->setObjectName("pipeWithCounter");
        pipeWithCounter->setGeometry(QRect(100, 90, 74, 23));
        pipeWithCounter->setNumButtons(0);
        pipeWithCounter->setProperty("basicstep", QVariant(1.000000000000000));
        pipeWithCounter->setMinimum(1.000000000000000);
        pipeWithCounter->setMaximum(1000.000000000000000);
        pipeWithCounter->setValue(14.000000000000000);
        thermoColor2PushButton = new QPushButton(ThermoOptions);
        thermoColor2PushButton->setObjectName("thermoColor2PushButton");
        thermoColor2PushButton->setEnabled(true);
        thermoColor2PushButton->setGeometry(QRect(100, 50, 83, 27));
        colorComboBox = new QComboBox(ThermoOptions);
        colorComboBox->addItem(QString());
        colorComboBox->addItem(QString());
        colorComboBox->setObjectName("colorComboBox");
        colorComboBox->setGeometry(QRect(90, 20, 121, 22));
        alarmCheckBox = new QCheckBox(ThermoOptions);
        alarmCheckBox->setObjectName("alarmCheckBox");
        alarmCheckBox->setGeometry(QRect(20, 120, 83, 22));
        alarmLevelCounter = new QwtCounter(ThermoOptions);
        alarmLevelCounter->setObjectName("alarmLevelCounter");
        alarmLevelCounter->setEnabled(true);
        alarmLevelCounter->setGeometry(QRect(140, 120, 74, 23));
        alarmLevelCounter->setNumButtons(0);
        alarmLevelCounter->setProperty("basicstep", QVariant(0.001000000000000));
        alarmLevelCounter->setMinimum(-1000000.000000000000000);
        alarmLevelCounter->setMaximum(1000000.000000000000000);
        alarmLevelCounter->setValue(1.000000000000000);
        label_3 = new QLabel(ThermoOptions);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 120, 31, 18));
        alarmThermoColor1PushButton = new QPushButton(ThermoOptions);
        alarmThermoColor1PushButton->setObjectName("alarmThermoColor1PushButton");
        alarmThermoColor1PushButton->setEnabled(true);
        alarmThermoColor1PushButton->setGeometry(QRect(10, 150, 83, 27));
        alarmThermoColor2PushButton = new QPushButton(ThermoOptions);
        alarmThermoColor2PushButton->setObjectName("alarmThermoColor2PushButton");
        alarmThermoColor2PushButton->setEnabled(true);
        alarmThermoColor2PushButton->setGeometry(QRect(120, 150, 83, 27));
        tabWidget->addTab(ThermoOptions, QString());
        DialOptions = new QWidget();
        DialOptions->setObjectName("DialOptions");
        dialColorPushButton = new QPushButton(DialOptions);
        dialColorPushButton->setObjectName("dialColorPushButton");
        dialColorPushButton->setGeometry(QRect(60, 50, 111, 27));
        tabWidget->addTab(DialOptions, QString());
        LcdOptions = new QWidget();
        LcdOptions->setObjectName("LcdOptions");
        fontPushButton = new QPushButton(LcdOptions);
        fontPushButton->setObjectName("fontPushButton");
        fontPushButton->setGeometry(QRect(50, 100, 111, 31));
        formatComboBox = new QComboBox(LcdOptions);
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->setObjectName("formatComboBox");
        formatComboBox->setGeometry(QRect(10, 10, 191, 29));
        label_4 = new QLabel(LcdOptions);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 69, 20));
        precisionCounter = new QwtCounter(LcdOptions);
        precisionCounter->setObjectName("precisionCounter");
        precisionCounter->setGeometry(QRect(90, 50, 84, 30));
        precisionCounter->setNumButtons(0);
        precisionCounter->setProperty("basicstep", QVariant(1.000000000000000));
        precisionCounter->setMinimum(-1.000000000000000);
        precisionCounter->setMaximum(100.000000000000000);
        precisionCounter->setValue(4.000000000000000);
        tabWidget->addTab(LcdOptions, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        QWidget::setTabOrder(meterListWidget, tabWidget);
        QWidget::setTabOrder(tabWidget, pipeWithCounter);
        QWidget::setTabOrder(pipeWithCounter, alarmLevelCounter);
        QWidget::setTabOrder(alarmLevelCounter, colorComboBox);
        QWidget::setTabOrder(colorComboBox, thermoColor1PushButton);
        QWidget::setTabOrder(thermoColor1PushButton, thermoColor2PushButton);
        QWidget::setTabOrder(thermoColor2PushButton, alarmThermoColor1PushButton);
        QWidget::setTabOrder(alarmThermoColor1PushButton, alarmThermoColor2PushButton);
        QWidget::setTabOrder(alarmThermoColor2PushButton, directionComboBox);
        QWidget::setTabOrder(directionComboBox, closeButton);
        QWidget::setTabOrder(closeButton, alarmCheckBox);
        QWidget::setTabOrder(alarmCheckBox, helpButton);
        QWidget::setTabOrder(helpButton, minCounter);
        QWidget::setTabOrder(minCounter, showCheckBox);
        QWidget::setTabOrder(showCheckBox, rrCounter);
        QWidget::setTabOrder(rrCounter, maxCounter);
        QWidget::setTabOrder(maxCounter, meterComboBox);

        retranslateUi(QRL_MetersManager);
        QObject::connect(closeButton, &QPushButton::clicked, QRL_MetersManager, qOverload<>(&QDialog::hide));

        tabWidget->setCurrentIndex(0);
        formatComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QRL_MetersManager);
    } // setupUi

    void retranslateUi(QDialog *QRL_MetersManager)
    {
        QRL_MetersManager->setWindowTitle(QCoreApplication::translate("QRL_MetersManager", "Meters Manager", nullptr));
        helpButton->setText(QCoreApplication::translate("QRL_MetersManager", "Help", nullptr));
        closeButton->setText(QCoreApplication::translate("QRL_MetersManager", "Close Manager", nullptr));
        showCheckBox->setText(QCoreApplication::translate("QRL_MetersManager", "Show/Hide", nullptr));
        frameLabel->setText(QCoreApplication::translate("QRL_MetersManager", "Refresh rate", nullptr));
        minLabel->setText(QCoreApplication::translate("QRL_MetersManager", "Min:", nullptr));
        maxLabel->setText(QCoreApplication::translate("QRL_MetersManager", "Max:", nullptr));
        meterComboBox->setItemText(0, QCoreApplication::translate("QRL_MetersManager", "Thermo", nullptr));
        meterComboBox->setItemText(1, QCoreApplication::translate("QRL_MetersManager", "Dial", nullptr));
        meterComboBox->setItemText(2, QCoreApplication::translate("QRL_MetersManager", "LCD", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QRL_MetersManager", "Meter", nullptr));
        thermoColor1PushButton->setText(QCoreApplication::translate("QRL_MetersManager", "BarColor", nullptr));
        directionComboBox->setItemText(0, QCoreApplication::translate("QRL_MetersManager", "vertical", nullptr));
        directionComboBox->setItemText(1, QCoreApplication::translate("QRL_MetersManager", "horizontal", nullptr));

        label->setText(QCoreApplication::translate("QRL_MetersManager", "pipeWith", nullptr));
        thermoColor2PushButton->setText(QCoreApplication::translate("QRL_MetersManager", "BarColor", nullptr));
        colorComboBox->setItemText(0, QCoreApplication::translate("QRL_MetersManager", "LinearGradient", nullptr));
        colorComboBox->setItemText(1, QCoreApplication::translate("QRL_MetersManager", "Color", nullptr));

        alarmCheckBox->setText(QCoreApplication::translate("QRL_MetersManager", "alarm", nullptr));
        label_3->setText(QCoreApplication::translate("QRL_MetersManager", "level", nullptr));
        alarmThermoColor1PushButton->setText(QCoreApplication::translate("QRL_MetersManager", "BarColor", nullptr));
        alarmThermoColor2PushButton->setText(QCoreApplication::translate("QRL_MetersManager", "BarColor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ThermoOptions), QCoreApplication::translate("QRL_MetersManager", "Options", nullptr));
        dialColorPushButton->setText(QCoreApplication::translate("QRL_MetersManager", "needle color", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DialOptions), QCoreApplication::translate("QRL_MetersManager", "Options", nullptr));
        fontPushButton->setText(QCoreApplication::translate("QRL_MetersManager", "Change Fonts", nullptr));
        formatComboBox->setItemText(0, QCoreApplication::translate("QRL_MetersManager", " e - exp. format", nullptr));
        formatComboBox->setItemText(1, QCoreApplication::translate("QRL_MetersManager", "f - fixed format", nullptr));
        formatComboBox->setItemText(2, QCoreApplication::translate("QRL_MetersManager", "g - mixed format", nullptr));

        label_4->setText(QCoreApplication::translate("QRL_MetersManager", "Precision:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LcdOptions), QCoreApplication::translate("QRL_MetersManager", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRL_MetersManager: public Ui_QRL_MetersManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRL_METERS_MANAGER_H
