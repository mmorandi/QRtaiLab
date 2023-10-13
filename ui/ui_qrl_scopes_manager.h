/********************************************************************************
** Form generated from reading UI file 'qrl_scopes_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRL_SCOPES_MANAGER_H
#define UI_QRL_SCOPES_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_counter.h"
#include "qwt_wheel.h"

QT_BEGIN_NAMESPACE

class Ui_QRL_ScopesManager
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *helpButton;
    QSpacerItem *spacerItem1;
    QPushButton *closeButton;
    QSpacerItem *spacerItem2;
    QListWidget *scopeListWidget;
    QTabWidget *tabWidget;
    QWidget *Scope;
    QGridLayout *gridLayout_5;
    QCheckBox *showCheckBox;
    QCheckBox *holdCheckBox;
    QToolBox *toolBox;
    QWidget *Seite;
    QGridLayout *gridLayout_4;
    QLabel *maxLabel_4;
    QwtCounter *dividerCounter;
    QLabel *dataPointLabel;
    QwtCounter *dataCounter;
    QLabel *maxLabel_3;
    QwtCounter *rrCounter;
    QLabel *maxLabel_2;
    QComboBox *dxComboBox;
    QComboBox *displayComboBox;
    QComboBox *directionComboBox;
    QComboBox *optionComboBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QCheckBox *oneShotCheckBox;
    QPushButton *startTriggerPushButton;
    QLabel *label_3;
    QSpacerItem *spacerItem3;
    QwtCounter *triggerCounter;
    QComboBox *traceComboBox;
    QPushButton *triggerPushButton;
    QSpacerItem *spacerItem4;
    QWidget *page_2;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *dirLineEdit;
    QwtCounter *timeCounter;
    QProgressBar *saveProgressBar;
    QPushButton *savePushButton;
    QPushButton *stopPushButton;
    QPushButton *dirPushButton;
    QLabel *label_5;
    QLineEdit *fileLineEdit;
    QLabel *label;
    QWidget *Trace;
    QGridLayout *gridLayout_3;
    QHBoxLayout *hboxLayout1;
    QLabel *label_4;
    QLineEdit *traceNameLineEdit;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_9;
    QPushButton *fitDyPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QComboBox *dyComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QPushButton *setMeanPushButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QwtCounter *offsetCounter;
    QLabel *offsetLabel;
    QwtWheel *offsetWheel;
    QWidget *page_4;
    QGridLayout *gridLayout_6;
    QCheckBox *showTraceCheckBox;
    QComboBox *styleComboBox;
    QGroupBox *groupBox_2;
    QPushButton *traceColorPushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QwtCounter *lineWidthCounter;
    QComboBox *lineStyleComboBox;
    QGroupBox *groupBox_5;
    QComboBox *symbolStyleComboBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QwtCounter *symbolSizeCounter;
    QPushButton *sPenColorPushButton;
    QPushButton *sBrushColorPushButton;
    QWidget *page_5;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QCheckBox *zeroAxisCheckBox;
    QCheckBox *minCheckBox;
    QCheckBox *averageCheckBox;
    QCheckBox *labelCheckBox;
    QCheckBox *maxCheckBox;
    QCheckBox *unitCheckBox;
    QCheckBox *ppCheckBox;
    QCheckBox *rmsCheckBox;

    void setupUi(QDialog *QRL_ScopesManager)
    {
        if (QRL_ScopesManager->objectName().isEmpty())
            QRL_ScopesManager->setObjectName("QRL_ScopesManager");
        QRL_ScopesManager->resize(459, 470);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QRL_ScopesManager->sizePolicy().hasHeightForWidth());
        QRL_ScopesManager->setSizePolicy(sizePolicy);
        QRL_ScopesManager->setMinimumSize(QSize(459, 470));
        QRL_ScopesManager->setMaximumSize(QSize(459, 470));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/scope_icon.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        QRL_ScopesManager->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(QRL_ScopesManager);
        gridLayout_2->setObjectName("gridLayout_2");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        helpButton = new QPushButton(QRL_ScopesManager);
        helpButton->setObjectName("helpButton");

        hboxLayout->addWidget(helpButton);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeButton = new QPushButton(QRL_ScopesManager);
        closeButton->setObjectName("closeButton");

        hboxLayout->addWidget(closeButton);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);


        gridLayout_2->addLayout(hboxLayout, 1, 0, 1, 3);

        scopeListWidget = new QListWidget(QRL_ScopesManager);
        scopeListWidget->setObjectName("scopeListWidget");
        sizePolicy.setHeightForWidth(scopeListWidget->sizePolicy().hasHeightForWidth());
        scopeListWidget->setSizePolicy(sizePolicy);
        scopeListWidget->setMaximumSize(QSize(200, 16777215));
        scopeListWidget->setBaseSize(QSize(100, 0));

        gridLayout_2->addWidget(scopeListWidget, 0, 0, 1, 1);

        tabWidget = new QTabWidget(QRL_ScopesManager);
        tabWidget->setObjectName("tabWidget");
        Scope = new QWidget();
        Scope->setObjectName("Scope");
        gridLayout_5 = new QGridLayout(Scope);
        gridLayout_5->setObjectName("gridLayout_5");
        showCheckBox = new QCheckBox(Scope);
        showCheckBox->setObjectName("showCheckBox");

        gridLayout_5->addWidget(showCheckBox, 0, 0, 1, 1);

        holdCheckBox = new QCheckBox(Scope);
        holdCheckBox->setObjectName("holdCheckBox");

        gridLayout_5->addWidget(holdCheckBox, 0, 1, 1, 1);

        toolBox = new QToolBox(Scope);
        toolBox->setObjectName("toolBox");
        Seite = new QWidget();
        Seite->setObjectName("Seite");
        Seite->setGeometry(QRect(0, 0, 217, 261));
        gridLayout_4 = new QGridLayout(Seite);
        gridLayout_4->setObjectName("gridLayout_4");
        maxLabel_4 = new QLabel(Seite);
        maxLabel_4->setObjectName("maxLabel_4");

        gridLayout_4->addWidget(maxLabel_4, 0, 0, 1, 2);

        dividerCounter = new QwtCounter(Seite);
        dividerCounter->setObjectName("dividerCounter");
        dividerCounter->setEnabled(true);
        dividerCounter->setNumButtons(1);
        dividerCounter->setProperty("basicstep", QVariant(1.000000000000000));
        dividerCounter->setMinimum(1.000000000000000);
        dividerCounter->setMaximum(100000.000000000000000);
        dividerCounter->setStepButton1(1);
        dividerCounter->setStepButton2(10);
        dividerCounter->setStepButton3(100);
        dividerCounter->setValue(1.000000000000000);
        dividerCounter->setReadOnly(false);

        gridLayout_4->addWidget(dividerCounter, 0, 2, 1, 1);

        dataPointLabel = new QLabel(Seite);
        dataPointLabel->setObjectName("dataPointLabel");

        gridLayout_4->addWidget(dataPointLabel, 1, 0, 1, 1);

        dataCounter = new QwtCounter(Seite);
        dataCounter->setObjectName("dataCounter");
        dataCounter->setEnabled(true);
        dataCounter->setNumButtons(0);
        dataCounter->setProperty("basicstep", QVariant(1.000000000000000));
        dataCounter->setMinimum(5.000000000000000);
        dataCounter->setMaximum(100000.000000000000000);
        dataCounter->setStepButton1(100);
        dataCounter->setStepButton2(1000);
        dataCounter->setStepButton3(5000);
        dataCounter->setValue(100.000000000000000);
        dataCounter->setReadOnly(true);

        gridLayout_4->addWidget(dataCounter, 1, 1, 1, 2);

        maxLabel_3 = new QLabel(Seite);
        maxLabel_3->setObjectName("maxLabel_3");

        gridLayout_4->addWidget(maxLabel_3, 2, 0, 1, 1);

        rrCounter = new QwtCounter(Seite);
        rrCounter->setObjectName("rrCounter");
        rrCounter->setNumButtons(1);
        rrCounter->setProperty("basicstep", QVariant(1.000000000000000));
        rrCounter->setMinimum(0.010000000000000);
        rrCounter->setMaximum(100.000000000000000);
        rrCounter->setStepButton1(1);
        rrCounter->setValue(20.000000000000000);

        gridLayout_4->addWidget(rrCounter, 2, 1, 1, 2);

        maxLabel_2 = new QLabel(Seite);
        maxLabel_2->setObjectName("maxLabel_2");

        gridLayout_4->addWidget(maxLabel_2, 3, 0, 1, 1);

        dxComboBox = new QComboBox(Seite);
        dxComboBox->addItem(QString());
        dxComboBox->addItem(QString());
        dxComboBox->addItem(QString());
        dxComboBox->addItem(QString());
        dxComboBox->addItem(QString());
        dxComboBox->addItem(QString());
        dxComboBox->addItem(QString());
        dxComboBox->setObjectName("dxComboBox");
        dxComboBox->setEditable(true);
        dxComboBox->setMinimumContentsLength(1);

        gridLayout_4->addWidget(dxComboBox, 3, 1, 1, 2);

        displayComboBox = new QComboBox(Seite);
        displayComboBox->addItem(QString());
        displayComboBox->addItem(QString());
        displayComboBox->addItem(QString());
        displayComboBox->addItem(QString());
        displayComboBox->setObjectName("displayComboBox");

        gridLayout_4->addWidget(displayComboBox, 4, 0, 1, 3);

        directionComboBox = new QComboBox(Seite);
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->setObjectName("directionComboBox");

        gridLayout_4->addWidget(directionComboBox, 5, 0, 1, 3);

        optionComboBox = new QComboBox(Seite);
        optionComboBox->addItem(QString());
        optionComboBox->addItem(QString());
        optionComboBox->addItem(QString());
        optionComboBox->setObjectName("optionComboBox");

        gridLayout_4->addWidget(optionComboBox, 6, 0, 1, 3);

        toolBox->addItem(Seite, QString::fromUtf8("Display"));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 217, 261));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        oneShotCheckBox = new QCheckBox(page);
        oneShotCheckBox->setObjectName("oneShotCheckBox");

        gridLayout->addWidget(oneShotCheckBox, 0, 0, 1, 1);

        startTriggerPushButton = new QPushButton(page);
        startTriggerPushButton->setObjectName("startTriggerPushButton");

        gridLayout->addWidget(startTriggerPushButton, 0, 1, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 1, 1, 1, 1);

        triggerCounter = new QwtCounter(page);
        triggerCounter->setObjectName("triggerCounter");
        triggerCounter->setNumButtons(0);
        triggerCounter->setProperty("basicstep", QVariant(0.100000000000000));
        triggerCounter->setMinimum(-1000000.000000000000000);
        triggerCounter->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(triggerCounter, 2, 0, 1, 1);

        traceComboBox = new QComboBox(page);
        traceComboBox->addItem(QString());
        traceComboBox->setObjectName("traceComboBox");

        gridLayout->addWidget(traceComboBox, 2, 1, 1, 1);

        triggerPushButton = new QPushButton(page);
        triggerPushButton->setObjectName("triggerPushButton");

        gridLayout->addWidget(triggerPushButton, 3, 0, 1, 2);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem4, 4, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("Trigger"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 217, 261));
        gridLayout1 = new QGridLayout(page_2);
        gridLayout1->setObjectName("gridLayout1");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        dirLineEdit = new QLineEdit(page_2);
        dirLineEdit->setObjectName("dirLineEdit");

        gridLayout1->addWidget(dirLineEdit, 1, 0, 1, 2);

        timeCounter = new QwtCounter(page_2);
        timeCounter->setObjectName("timeCounter");
        timeCounter->setLayoutDirection(Qt::RightToLeft);
        timeCounter->setNumButtons(0);
        timeCounter->setMinimum(0.000000000000000);
        timeCounter->setMaximum(1000000.000000000000000);
        timeCounter->setValue(1.000000000000000);

        gridLayout1->addWidget(timeCounter, 7, 0, 1, 2);

        saveProgressBar = new QProgressBar(page_2);
        saveProgressBar->setObjectName("saveProgressBar");
        saveProgressBar->setEnabled(false);
        saveProgressBar->setValue(100);

        gridLayout1->addWidget(saveProgressBar, 8, 0, 1, 2);

        savePushButton = new QPushButton(page_2);
        savePushButton->setObjectName("savePushButton");
        savePushButton->setCheckable(true);
        savePushButton->setAutoDefault(false);

        gridLayout1->addWidget(savePushButton, 11, 0, 1, 1);

        stopPushButton = new QPushButton(page_2);
        stopPushButton->setObjectName("stopPushButton");
        stopPushButton->setEnabled(false);

        gridLayout1->addWidget(stopPushButton, 11, 1, 1, 1);

        dirPushButton = new QPushButton(page_2);
        dirPushButton->setObjectName("dirPushButton");

        gridLayout1->addWidget(dirPushButton, 0, 1, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 2, 0, 1, 1);

        fileLineEdit = new QLineEdit(page_2);
        fileLineEdit->setObjectName("fileLineEdit");

        gridLayout1->addWidget(fileLineEdit, 2, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 6, 0, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("Saving"));

        gridLayout_5->addWidget(toolBox, 1, 0, 1, 2);

        tabWidget->addTab(Scope, QString());
        Trace = new QWidget();
        Trace->setObjectName("Trace");
        gridLayout_3 = new QGridLayout(Trace);
        gridLayout_3->setObjectName("gridLayout_3");
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        label_4 = new QLabel(Trace);
        label_4->setObjectName("label_4");

        hboxLayout1->addWidget(label_4);

        traceNameLineEdit = new QLineEdit(Trace);
        traceNameLineEdit->setObjectName("traceNameLineEdit");

        hboxLayout1->addWidget(traceNameLineEdit);


        gridLayout_3->addLayout(hboxLayout1, 0, 0, 1, 2);

        toolBox_2 = new QToolBox(Trace);
        toolBox_2->setObjectName("toolBox_2");
        toolBox_2->setMinimumSize(QSize(227, 0));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 217, 254));
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setObjectName("gridLayout_10");
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setMaximumSize(QSize(200, 110));
        gridLayout_9 = new QGridLayout(groupBox_4);
        gridLayout_9->setObjectName("gridLayout_9");
        fitDyPushButton = new QPushButton(groupBox_4);
        fitDyPushButton->setObjectName("fitDyPushButton");

        gridLayout_9->addWidget(fitDyPushButton, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_6);

        dyComboBox = new QComboBox(groupBox_4);
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->addItem(QString());
        dyComboBox->setObjectName("dyComboBox");
        dyComboBox->setMinimumSize(QSize(120, 0));
        dyComboBox->setEditable(true);
        dyComboBox->setMaxVisibleItems(20);

        horizontalLayout_3->addWidget(dyComboBox);


        gridLayout_9->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(200, 130));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setObjectName("gridLayout_8");
        setMeanPushButton = new QPushButton(groupBox_3);
        setMeanPushButton->setObjectName("setMeanPushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setMeanPushButton->sizePolicy().hasHeightForWidth());
        setMeanPushButton->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(setMeanPushButton, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        offsetCounter = new QwtCounter(groupBox_3);
        offsetCounter->setObjectName("offsetCounter");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(offsetCounter->sizePolicy().hasHeightForWidth());
        offsetCounter->setSizePolicy(sizePolicy2);
        offsetCounter->setNumButtons(0);
        offsetCounter->setProperty("basicstep", QVariant(0.100000000000000));
        offsetCounter->setMinimum(-1000000.000000000000000);
        offsetCounter->setMaximum(1000000.000000000000000);

        horizontalLayout_2->addWidget(offsetCounter);

        offsetLabel = new QLabel(groupBox_3);
        offsetLabel->setObjectName("offsetLabel");

        horizontalLayout_2->addWidget(offsetLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        offsetWheel = new QwtWheel(groupBox_3);
        offsetWheel->setObjectName("offsetWheel");
        sizePolicy2.setHeightForWidth(offsetWheel->sizePolicy().hasHeightForWidth());
        offsetWheel->setSizePolicy(sizePolicy2);
        offsetWheel->setMass(1.000000000000000);

        verticalLayout->addWidget(offsetWheel);


        gridLayout_8->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_3, 0, 0, 1, 1);

        toolBox_2->addItem(page_3, QString::fromUtf8("offset / dy"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setGeometry(QRect(0, 0, 217, 254));
        gridLayout_6 = new QGridLayout(page_4);
        gridLayout_6->setObjectName("gridLayout_6");
        showTraceCheckBox = new QCheckBox(page_4);
        showTraceCheckBox->setObjectName("showTraceCheckBox");

        gridLayout_6->addWidget(showTraceCheckBox, 0, 0, 1, 1);

        styleComboBox = new QComboBox(page_4);
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->setObjectName("styleComboBox");
        styleComboBox->setFocusPolicy(Qt::ClickFocus);

        gridLayout_6->addWidget(styleComboBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName("groupBox_2");
        traceColorPushButton = new QPushButton(groupBox_2);
        traceColorPushButton->setObjectName("traceColorPushButton");
        traceColorPushButton->setGeometry(QRect(130, 60, 51, 21));
        widget = new QWidget(groupBox_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 81, 39));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        lineWidthCounter = new QwtCounter(widget);
        lineWidthCounter->setObjectName("lineWidthCounter");
        lineWidthCounter->setNumButtons(0);
        lineWidthCounter->setProperty("basicstep", QVariant(1.000000000000000));
        lineWidthCounter->setMinimum(1.000000000000000);
        lineWidthCounter->setMaximum(50.000000000000000);

        horizontalLayout->addWidget(lineWidthCounter);

        lineStyleComboBox = new QComboBox(groupBox_2);
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->setObjectName("lineStyleComboBox");
        lineStyleComboBox->setGeometry(QRect(120, 30, 77, 26));

        gridLayout_6->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName("groupBox_5");
        symbolStyleComboBox = new QComboBox(groupBox_5);
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->addItem(QString());
        symbolStyleComboBox->setObjectName("symbolStyleComboBox");
        symbolStyleComboBox->setGeometry(QRect(10, 60, 91, 26));
        widget1 = new QWidget(groupBox_5);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 30, 114, 30));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget1);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        symbolSizeCounter = new QwtCounter(widget1);
        symbolSizeCounter->setObjectName("symbolSizeCounter");
        symbolSizeCounter->setNumButtons(0);
        symbolSizeCounter->setProperty("basicstep", QVariant(1.000000000000000));
        symbolSizeCounter->setMinimum(1.000000000000000);
        symbolSizeCounter->setMaximum(50.000000000000000);

        horizontalLayout_4->addWidget(symbolSizeCounter);

        sPenColorPushButton = new QPushButton(groupBox_5);
        sPenColorPushButton->setObjectName("sPenColorPushButton");
        sPenColorPushButton->setGeometry(QRect(140, 30, 41, 21));
        sBrushColorPushButton = new QPushButton(groupBox_5);
        sBrushColorPushButton->setObjectName("sBrushColorPushButton");
        sBrushColorPushButton->setGeometry(QRect(140, 60, 51, 21));

        gridLayout_6->addWidget(groupBox_5, 3, 0, 1, 1);

        toolBox_2->addItem(page_4, QString::fromUtf8("Trace Options"));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        page_5->setGeometry(QRect(0, 0, 217, 254));
        gridLayout_7 = new QGridLayout(page_5);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBox = new QGroupBox(page_5);
        groupBox->setObjectName("groupBox");
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setObjectName("gridLayout2");
        zeroAxisCheckBox = new QCheckBox(groupBox);
        zeroAxisCheckBox->setObjectName("zeroAxisCheckBox");

        gridLayout2->addWidget(zeroAxisCheckBox, 0, 0, 1, 1);

        minCheckBox = new QCheckBox(groupBox);
        minCheckBox->setObjectName("minCheckBox");
        minCheckBox->setEnabled(true);

        gridLayout2->addWidget(minCheckBox, 0, 1, 1, 1);

        averageCheckBox = new QCheckBox(groupBox);
        averageCheckBox->setObjectName("averageCheckBox");
        averageCheckBox->setEnabled(true);

        gridLayout2->addWidget(averageCheckBox, 3, 1, 1, 1);

        labelCheckBox = new QCheckBox(groupBox);
        labelCheckBox->setObjectName("labelCheckBox");
        labelCheckBox->setEnabled(true);

        gridLayout2->addWidget(labelCheckBox, 1, 0, 1, 1);

        maxCheckBox = new QCheckBox(groupBox);
        maxCheckBox->setObjectName("maxCheckBox");
        maxCheckBox->setEnabled(true);

        gridLayout2->addWidget(maxCheckBox, 1, 1, 1, 1);

        unitCheckBox = new QCheckBox(groupBox);
        unitCheckBox->setObjectName("unitCheckBox");
        unitCheckBox->setEnabled(true);

        gridLayout2->addWidget(unitCheckBox, 3, 0, 1, 1);

        ppCheckBox = new QCheckBox(groupBox);
        ppCheckBox->setObjectName("ppCheckBox");
        ppCheckBox->setEnabled(true);

        gridLayout2->addWidget(ppCheckBox, 4, 0, 1, 1);

        rmsCheckBox = new QCheckBox(groupBox);
        rmsCheckBox->setObjectName("rmsCheckBox");
        rmsCheckBox->setEnabled(true);

        gridLayout2->addWidget(rmsCheckBox, 4, 1, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 1);

        toolBox_2->addItem(page_5, QString::fromUtf8("Labels"));

        gridLayout_3->addWidget(toolBox_2, 1, 0, 1, 2);

        tabWidget->addTab(Trace, QString());

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(QRL_ScopesManager);
        QObject::connect(closeButton, &QPushButton::clicked, QRL_ScopesManager, qOverload<>(&QDialog::hide));

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        dxComboBox->setCurrentIndex(4);
        toolBox_2->setCurrentIndex(0);
        dyComboBox->setCurrentIndex(10);
        lineStyleComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QRL_ScopesManager);
    } // setupUi

    void retranslateUi(QDialog *QRL_ScopesManager)
    {
        QRL_ScopesManager->setWindowTitle(QCoreApplication::translate("QRL_ScopesManager", "Scopes Manager", nullptr));
        helpButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Help", nullptr));
        closeButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Close Manager", nullptr));
        showCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Show/Hide", nullptr));
#if QT_CONFIG(tooltip)
        holdCheckBox->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "stop plotting will reduce cpu load. Saving is still possible!", nullptr));
#endif // QT_CONFIG(tooltip)
        holdCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "hold Plot", nullptr));
        maxLabel_4->setText(QCoreApplication::translate("QRL_ScopesManager", "Divider", nullptr));
#if QT_CONFIG(tooltip)
        dividerCounter->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Reduces the Number of plotted points. Can be used to reduce cpu load.", nullptr));
#endif // QT_CONFIG(tooltip)
        dataPointLabel->setText(QCoreApplication::translate("QRL_ScopesManager", "Data points", nullptr));
#if QT_CONFIG(tooltip)
        dataCounter->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Number of shown data points in the plot window.", nullptr));
#endif // QT_CONFIG(tooltip)
        maxLabel_3->setText(QCoreApplication::translate("QRL_ScopesManager", "Frames", nullptr));
#if QT_CONFIG(tooltip)
        rrCounter->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "frames per seconds", nullptr));
#endif // QT_CONFIG(tooltip)
        maxLabel_2->setText(QCoreApplication::translate("QRL_ScopesManager", "sec/div", nullptr));
        dxComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "0.001", nullptr));
        dxComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "0.005", nullptr));
        dxComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "0.01", nullptr));
        dxComboBox->setItemText(3, QCoreApplication::translate("QRL_ScopesManager", "0.05", nullptr));
        dxComboBox->setItemText(4, QCoreApplication::translate("QRL_ScopesManager", "0.1", nullptr));
        dxComboBox->setItemText(5, QCoreApplication::translate("QRL_ScopesManager", "0.5", nullptr));
        dxComboBox->setItemText(6, QCoreApplication::translate("QRL_ScopesManager", "1", nullptr));

#if QT_CONFIG(tooltip)
        dxComboBox->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "set the seconds per devision to scale the x-axis of the plot.", nullptr));
#endif // QT_CONFIG(tooltip)
        displayComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "Continuous Roling", nullptr));
        displayComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "Overwrite", nullptr));
        displayComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "Trigger +to-", nullptr));
        displayComboBox->setItemText(3, QCoreApplication::translate("QRL_ScopesManager", "Trigger -to+", nullptr));

#if QT_CONFIG(tooltip)
        displayComboBox->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Plotting mode", nullptr));
#endif // QT_CONFIG(tooltip)
        directionComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "right to left", nullptr));
        directionComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "left to right", nullptr));

#if QT_CONFIG(tooltip)
        directionComboBox->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Plotting direction", nullptr));
#endif // QT_CONFIG(tooltip)
        optionComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "Show Grid", nullptr));
        optionComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "set BG Color", nullptr));
        optionComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "set Grid Color", nullptr));

        toolBox->setItemText(toolBox->indexOf(Seite), QCoreApplication::translate("QRL_ScopesManager", "Display", nullptr));
#if QT_CONFIG(tooltip)
        oneShotCheckBox->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Enable one shot triggering. Press the start button to restart triggering. ", nullptr));
#endif // QT_CONFIG(tooltip)
        oneShotCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "One Shot", nullptr));
        startTriggerPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Start", nullptr));
        label_3->setText(QCoreApplication::translate("QRL_ScopesManager", "Trigger offset", nullptr));
#if QT_CONFIG(tooltip)
        triggerCounter->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "trigger barrier", nullptr));
#endif // QT_CONFIG(tooltip)
        traceComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "Trace 1", nullptr));

#if QT_CONFIG(tooltip)
        traceComboBox->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "trigger source", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        triggerPushButton->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Releases a trigger event.", nullptr));
#endif // QT_CONFIG(tooltip)
        triggerPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Manual Trigger", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("QRL_ScopesManager", "Trigger", nullptr));
        label_2->setText(QCoreApplication::translate("QRL_ScopesManager", "Directory", nullptr));
#if QT_CONFIG(tooltip)
        dirLineEdit->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "File directory", nullptr));
#endif // QT_CONFIG(tooltip)
        dirLineEdit->setText(QCoreApplication::translate("QRL_ScopesManager", "./", nullptr));
#if QT_CONFIG(tooltip)
        timeCounter->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "Time duration of the next saving", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        savePushButton->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "start saving", nullptr));
#endif // QT_CONFIG(tooltip)
        savePushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Save", nullptr));
#if QT_CONFIG(tooltip)
        stopPushButton->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "stop saving", nullptr));
#endif // QT_CONFIG(tooltip)
        stopPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "stop", nullptr));
        dirPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Set Directory", nullptr));
        label_5->setText(QCoreApplication::translate("QRL_ScopesManager", "FileName", nullptr));
#if QT_CONFIG(tooltip)
        fileLineEdit->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "file name", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QRL_ScopesManager", "Time [s]", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("QRL_ScopesManager", "Saving", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Scope), QCoreApplication::translate("QRL_ScopesManager", "Scope", nullptr));
        label_4->setText(QCoreApplication::translate("QRL_ScopesManager", "name", nullptr));
#if QT_CONFIG(tooltip)
        traceNameLineEdit->setToolTip(QCoreApplication::translate("QRL_ScopesManager", "set a  new trace name", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_4->setTitle(QCoreApplication::translate("QRL_ScopesManager", "dy", nullptr));
        fitDyPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "fit to PP", nullptr));
        label_6->setText(QCoreApplication::translate("QRL_ScopesManager", "Units/div:", nullptr));
        dyComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "0.001", nullptr));
        dyComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "0.002", nullptr));
        dyComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "0.005", nullptr));
        dyComboBox->setItemText(3, QCoreApplication::translate("QRL_ScopesManager", "0.01", nullptr));
        dyComboBox->setItemText(4, QCoreApplication::translate("QRL_ScopesManager", "0.02", nullptr));
        dyComboBox->setItemText(5, QCoreApplication::translate("QRL_ScopesManager", "0.05", nullptr));
        dyComboBox->setItemText(6, QCoreApplication::translate("QRL_ScopesManager", "0.1", nullptr));
        dyComboBox->setItemText(7, QCoreApplication::translate("QRL_ScopesManager", "0.2", nullptr));
        dyComboBox->setItemText(8, QCoreApplication::translate("QRL_ScopesManager", "0.5", nullptr));
        dyComboBox->setItemText(9, QCoreApplication::translate("QRL_ScopesManager", "1", nullptr));
        dyComboBox->setItemText(10, QCoreApplication::translate("QRL_ScopesManager", "2", nullptr));
        dyComboBox->setItemText(11, QCoreApplication::translate("QRL_ScopesManager", "5", nullptr));
        dyComboBox->setItemText(12, QCoreApplication::translate("QRL_ScopesManager", "10", nullptr));
        dyComboBox->setItemText(13, QCoreApplication::translate("QRL_ScopesManager", "50", nullptr));
        dyComboBox->setItemText(14, QCoreApplication::translate("QRL_ScopesManager", "100", nullptr));
        dyComboBox->setItemText(15, QCoreApplication::translate("QRL_ScopesManager", "1000", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("QRL_ScopesManager", "offset", nullptr));
        setMeanPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "set to mean", nullptr));
        offsetLabel->setText(QCoreApplication::translate("QRL_ScopesManager", "div", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QCoreApplication::translate("QRL_ScopesManager", "offset / dy", nullptr));
#if QT_CONFIG(tooltip)
        showTraceCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        showTraceCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Show/Hide", nullptr));
        styleComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "Templates", nullptr));
        styleComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "Line / None", nullptr));
        styleComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "Line / Cross", nullptr));
        styleComboBox->setItemText(3, QCoreApplication::translate("QRL_ScopesManager", "Sticks / Ellipse", nullptr));
        styleComboBox->setItemText(4, QCoreApplication::translate("QRL_ScopesManager", "Steps / None", nullptr));
        styleComboBox->setItemText(5, QCoreApplication::translate("QRL_ScopesManager", "None / XCross", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("QRL_ScopesManager", "Line", nullptr));
        traceColorPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Color", nullptr));
        label_7->setText(QCoreApplication::translate("QRL_ScopesManager", "width", nullptr));
        lineStyleComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "NoCurve", nullptr));
        lineStyleComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "Lines", nullptr));
        lineStyleComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "Sticks", nullptr));
        lineStyleComboBox->setItemText(3, QCoreApplication::translate("QRL_ScopesManager", "Steps", nullptr));
        lineStyleComboBox->setItemText(4, QCoreApplication::translate("QRL_ScopesManager", "Dots", nullptr));

        groupBox_5->setTitle(QCoreApplication::translate("QRL_ScopesManager", "Symbol", nullptr));
        symbolStyleComboBox->setItemText(0, QCoreApplication::translate("QRL_ScopesManager", "NoSymbol", nullptr));
        symbolStyleComboBox->setItemText(1, QCoreApplication::translate("QRL_ScopesManager", "Ellipse", nullptr));
        symbolStyleComboBox->setItemText(2, QCoreApplication::translate("QRL_ScopesManager", "Rect", nullptr));
        symbolStyleComboBox->setItemText(3, QCoreApplication::translate("QRL_ScopesManager", "Diamond", nullptr));
        symbolStyleComboBox->setItemText(4, QCoreApplication::translate("QRL_ScopesManager", "Triangle", nullptr));
        symbolStyleComboBox->setItemText(5, QCoreApplication::translate("QRL_ScopesManager", "DTriangle", nullptr));
        symbolStyleComboBox->setItemText(6, QCoreApplication::translate("QRL_ScopesManager", "UTriangle", nullptr));
        symbolStyleComboBox->setItemText(7, QCoreApplication::translate("QRL_ScopesManager", "LTriangle", nullptr));
        symbolStyleComboBox->setItemText(8, QCoreApplication::translate("QRL_ScopesManager", "RTriangle", nullptr));
        symbolStyleComboBox->setItemText(9, QCoreApplication::translate("QRL_ScopesManager", "Cross", nullptr));
        symbolStyleComboBox->setItemText(10, QCoreApplication::translate("QRL_ScopesManager", "XCross", nullptr));
        symbolStyleComboBox->setItemText(11, QCoreApplication::translate("QRL_ScopesManager", "HLine", nullptr));
        symbolStyleComboBox->setItemText(12, QCoreApplication::translate("QRL_ScopesManager", "VLine", nullptr));
        symbolStyleComboBox->setItemText(13, QCoreApplication::translate("QRL_ScopesManager", "Star1", nullptr));
        symbolStyleComboBox->setItemText(14, QCoreApplication::translate("QRL_ScopesManager", "Star2", nullptr));
        symbolStyleComboBox->setItemText(15, QCoreApplication::translate("QRL_ScopesManager", "Hexagon", nullptr));

        label_8->setText(QCoreApplication::translate("QRL_ScopesManager", "size", nullptr));
        sPenColorPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", " Pen", nullptr));
        sBrushColorPushButton->setText(QCoreApplication::translate("QRL_ScopesManager", "Brush", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QCoreApplication::translate("QRL_ScopesManager", "Trace Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QRL_ScopesManager", "show", nullptr));
        zeroAxisCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Zero Axis", nullptr));
        minCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Min", nullptr));
        averageCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Average", nullptr));
        labelCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Label", nullptr));
        maxCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Max", nullptr));
        unitCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "Units/div", nullptr));
        ppCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "PP", nullptr));
        rmsCheckBox->setText(QCoreApplication::translate("QRL_ScopesManager", "RMS", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_5), QCoreApplication::translate("QRL_ScopesManager", "Labels", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Trace), QCoreApplication::translate("QRL_ScopesManager", "Trace options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRL_ScopesManager: public Ui_QRL_ScopesManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRL_SCOPES_MANAGER_H
