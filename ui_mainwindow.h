/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPause;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionLayout;
    QAction *actionUpdate;
    QAction *actionAbout;
    QAction *actionGlossary;
    QAction *actionEasy;
    QAction *actionMedium;
    QAction *actionHard;
    QAction *actionSlow;
    QAction *actionMedium_2;
    QAction *actionFast;
    QAction *actionCombat;
    QAction *actionConstruction;
    QAction *actionResearch;
    QAction *action1366_X_720;
    QAction *action1920_X_1200;
    QAction *actionMessages;
    QAction *actionSpeed;
    QAction *actionShow_All;
    QAction *actionConstruction_2;
    QAction *actionResearch_2;
    QAction *actionCombat_2;
    QAction *actionDifficulty;
    QAction *actionSmall;
    QAction *actionMedium_3;
    QAction *actionSlow_2;
    QAction *actionFast_2;
    QAction *actionFaster;
    QAction *actionMap;
    QWidget *centralWidget;
    QTabWidget *control_tabWidget;
    QWidget *command_tab;
    QTabWidget *unit_selection_tabWidget;
    QWidget *attacking_units_tab;
    QTableWidget *attacking_units_tableWidget;
    QWidget *defending_units_tab;
    QTableWidget *defending_units_tableWidget;
    QWidget *idle_units_tab;
    QTableWidget *idle_units_tableWidget;
    QWidget *groups_tab;
    QTabWidget *group_tabWidget;
    QWidget *groupA_tab;
    QTableWidget *all_units_tableWidget_2;
    QWidget *groupB_tab;
    QTableWidget *all_units_tableWidget_3;
    QWidget *groupC_tab;
    QTableWidget *all_units_tableWidget_4;
    QWidget *groupD_tab;
    QTableWidget *all_units_tableWidget_5;
    QWidget *all_units_tab;
    QTableWidget *all_units_tableWidget;
    QCommandLinkButton *attack_commandLinkButton;
    QCommandLinkButton *move_commandLinkButton;
    QCommandLinkButton *defend_commandLinkButton;
    QCommandLinkButton *stop_commandLinkButton;
    QPushButton *select_all_pushButton;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *grouping_label;
    QComboBox *group_selection_comboBox;
    QCommandLinkButton *heal_commandLinkButton;
    QWidget *construction_tab;
    QTabWidget *construction_tabWidget;
    QWidget *troop_construction_tab;
    QListWidget *troop_construction_listWidget;
    QWidget *vehicle_construction_tab;
    QListWidget *vehicle_construction_listWidget;
    QWidget *building_construction_tab;
    QListWidget *building_construction_listWidget;
    QWidget *construction_in_progress_tab;
    QListWidget *construction_in_progress_listWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_16;
    QLabel *construction_description_label;
    QTextBrowser *construction_info_textBrowser;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_19;
    QLabel *construction_progress_label;
    QProgressBar *construction_progressBar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *consturciton_stats_label;
    QTableWidget *construction_stat_tableWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *construction_cost_label;
    QTableWidget *construction_cost_tableWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *construction_quantity_label;
    QSpinBox *construction_quantity_spinBox;
    QCommandLinkButton *build_commandLinkButton;
    QCommandLinkButton *cancel_construction_commandLinkButton;
    QWidget *research_tab;
    QTabWidget *research_tabWidget;
    QWidget *troops_research_tab;
    QTreeWidget *troops_research_treeWidget;
    QWidget *vehicles_research_tab;
    QTreeWidget *vehicle_research_treeWidget;
    QWidget *buildings_research_tab;
    QTreeWidget *building_research_treeWidget;
    QWidget *in_progress_research_tab;
    QListWidget *research_in_progress_listWidget_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QCommandLinkButton *research_commandLinkButton;
    QCommandLinkButton *cancel_research_commandLinkButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *research_progress_label;
    QProgressBar *research_progressBar;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *research_description_label;
    QTextBrowser *research_info_textBrowser;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *research_cost_label;
    QTableWidget *research_cost_tableWidget;
    QTableWidget *map_tableWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_12;
    QLabel *notifications_label;
    QListWidget *notifications_listWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *dismiss_notification_pushButton;
    QPushButton *dismiss_all_notifications_pushButton;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_11;
    QLabel *minimap_label;
    QTableWidget *minimap_tableWidget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_15;
    QLabel *clockLabel;
    QLCDNumber *clockLCD;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QLabel *resources_label;
    QTableWidget *resourceTable;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QMenu *menuOptions;
    QMenu *menuNotifications_2;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionLayout = new QAction(MainWindow);
        actionLayout->setObjectName(QStringLiteral("actionLayout"));
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionGlossary = new QAction(MainWindow);
        actionGlossary->setObjectName(QStringLiteral("actionGlossary"));
        actionEasy = new QAction(MainWindow);
        actionEasy->setObjectName(QStringLiteral("actionEasy"));
        actionMedium = new QAction(MainWindow);
        actionMedium->setObjectName(QStringLiteral("actionMedium"));
        actionHard = new QAction(MainWindow);
        actionHard->setObjectName(QStringLiteral("actionHard"));
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QStringLiteral("actionSlow"));
        actionMedium_2 = new QAction(MainWindow);
        actionMedium_2->setObjectName(QStringLiteral("actionMedium_2"));
        actionFast = new QAction(MainWindow);
        actionFast->setObjectName(QStringLiteral("actionFast"));
        actionCombat = new QAction(MainWindow);
        actionCombat->setObjectName(QStringLiteral("actionCombat"));
        actionCombat->setCheckable(true);
        actionConstruction = new QAction(MainWindow);
        actionConstruction->setObjectName(QStringLiteral("actionConstruction"));
        actionConstruction->setCheckable(true);
        actionResearch = new QAction(MainWindow);
        actionResearch->setObjectName(QStringLiteral("actionResearch"));
        action1366_X_720 = new QAction(MainWindow);
        action1366_X_720->setObjectName(QStringLiteral("action1366_X_720"));
        action1920_X_1200 = new QAction(MainWindow);
        action1920_X_1200->setObjectName(QStringLiteral("action1920_X_1200"));
        actionMessages = new QAction(MainWindow);
        actionMessages->setObjectName(QStringLiteral("actionMessages"));
        actionSpeed = new QAction(MainWindow);
        actionSpeed->setObjectName(QStringLiteral("actionSpeed"));
        actionShow_All = new QAction(MainWindow);
        actionShow_All->setObjectName(QStringLiteral("actionShow_All"));
        actionConstruction_2 = new QAction(MainWindow);
        actionConstruction_2->setObjectName(QStringLiteral("actionConstruction_2"));
        actionConstruction_2->setCheckable(true);
        actionConstruction_2->setChecked(true);
        actionResearch_2 = new QAction(MainWindow);
        actionResearch_2->setObjectName(QStringLiteral("actionResearch_2"));
        actionResearch_2->setCheckable(true);
        actionResearch_2->setChecked(true);
        actionCombat_2 = new QAction(MainWindow);
        actionCombat_2->setObjectName(QStringLiteral("actionCombat_2"));
        actionCombat_2->setCheckable(true);
        actionCombat_2->setChecked(true);
        actionDifficulty = new QAction(MainWindow);
        actionDifficulty->setObjectName(QStringLiteral("actionDifficulty"));
        actionSmall = new QAction(MainWindow);
        actionSmall->setObjectName(QStringLiteral("actionSmall"));
        actionMedium_3 = new QAction(MainWindow);
        actionMedium_3->setObjectName(QStringLiteral("actionMedium_3"));
        actionSlow_2 = new QAction(MainWindow);
        actionSlow_2->setObjectName(QStringLiteral("actionSlow_2"));
        actionFast_2 = new QAction(MainWindow);
        actionFast_2->setObjectName(QStringLiteral("actionFast_2"));
        actionFaster = new QAction(MainWindow);
        actionFaster->setObjectName(QStringLiteral("actionFaster"));
        actionMap = new QAction(MainWindow);
        actionMap->setObjectName(QStringLiteral("actionMap"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        control_tabWidget = new QTabWidget(centralWidget);
        control_tabWidget->setObjectName(QStringLiteral("control_tabWidget"));
        control_tabWidget->setGeometry(QRect(920, 280, 441, 371));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(control_tabWidget->sizePolicy().hasHeightForWidth());
        control_tabWidget->setSizePolicy(sizePolicy1);
        control_tabWidget->setIconSize(QSize(16, 16));
        command_tab = new QWidget();
        command_tab->setObjectName(QStringLiteral("command_tab"));
        unit_selection_tabWidget = new QTabWidget(command_tab);
        unit_selection_tabWidget->setObjectName(QStringLiteral("unit_selection_tabWidget"));
        unit_selection_tabWidget->setGeometry(QRect(0, 10, 331, 331));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(unit_selection_tabWidget->sizePolicy().hasHeightForWidth());
        unit_selection_tabWidget->setSizePolicy(sizePolicy2);
        unit_selection_tabWidget->setTabPosition(QTabWidget::West);
        attacking_units_tab = new QWidget();
        attacking_units_tab->setObjectName(QStringLiteral("attacking_units_tab"));
        attacking_units_tableWidget = new QTableWidget(attacking_units_tab);
        if (attacking_units_tableWidget->columnCount() < 4)
            attacking_units_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        attacking_units_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        attacking_units_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        attacking_units_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attacking_units_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (attacking_units_tableWidget->rowCount() < 15)
            attacking_units_tableWidget->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        attacking_units_tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        attacking_units_tableWidget->setItem(1, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        attacking_units_tableWidget->setItem(2, 0, __qtablewidgetitem6);
        attacking_units_tableWidget->setObjectName(QStringLiteral("attacking_units_tableWidget"));
        attacking_units_tableWidget->setGeometry(QRect(10, 10, 281, 301));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(attacking_units_tableWidget->sizePolicy().hasHeightForWidth());
        attacking_units_tableWidget->setSizePolicy(sizePolicy3);
        attacking_units_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        attacking_units_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        attacking_units_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        attacking_units_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        attacking_units_tableWidget->setRowCount(15);
        attacking_units_tableWidget->horizontalHeader()->setDefaultSectionSize(66);
        attacking_units_tableWidget->verticalHeader()->setVisible(false);
        attacking_units_tableWidget->verticalHeader()->setDefaultSectionSize(20);
        unit_selection_tabWidget->addTab(attacking_units_tab, QString());
        defending_units_tab = new QWidget();
        defending_units_tab->setObjectName(QStringLiteral("defending_units_tab"));
        defending_units_tableWidget = new QTableWidget(defending_units_tab);
        if (defending_units_tableWidget->columnCount() < 4)
            defending_units_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        defending_units_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        defending_units_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        defending_units_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        defending_units_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        if (defending_units_tableWidget->rowCount() < 14)
            defending_units_tableWidget->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        defending_units_tableWidget->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        defending_units_tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        defending_units_tableWidget->setItem(2, 0, __qtablewidgetitem13);
        defending_units_tableWidget->setObjectName(QStringLiteral("defending_units_tableWidget"));
        defending_units_tableWidget->setGeometry(QRect(10, 10, 281, 301));
        defending_units_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        defending_units_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        defending_units_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defending_units_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        defending_units_tableWidget->setRowCount(14);
        defending_units_tableWidget->setColumnCount(4);
        defending_units_tableWidget->horizontalHeader()->setDefaultSectionSize(66);
        defending_units_tableWidget->verticalHeader()->setVisible(false);
        defending_units_tableWidget->verticalHeader()->setDefaultSectionSize(20);
        unit_selection_tabWidget->addTab(defending_units_tab, QString());
        idle_units_tab = new QWidget();
        idle_units_tab->setObjectName(QStringLiteral("idle_units_tab"));
        idle_units_tableWidget = new QTableWidget(idle_units_tab);
        if (idle_units_tableWidget->columnCount() < 4)
            idle_units_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        idle_units_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        idle_units_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        idle_units_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        idle_units_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        if (idle_units_tableWidget->rowCount() < 14)
            idle_units_tableWidget->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        idle_units_tableWidget->setItem(0, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        idle_units_tableWidget->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        idle_units_tableWidget->setItem(2, 0, __qtablewidgetitem20);
        idle_units_tableWidget->setObjectName(QStringLiteral("idle_units_tableWidget"));
        idle_units_tableWidget->setGeometry(QRect(10, 10, 281, 301));
        idle_units_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        idle_units_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        idle_units_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        idle_units_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        idle_units_tableWidget->setRowCount(14);
        idle_units_tableWidget->horizontalHeader()->setDefaultSectionSize(66);
        idle_units_tableWidget->verticalHeader()->setVisible(false);
        idle_units_tableWidget->verticalHeader()->setDefaultSectionSize(20);
        unit_selection_tabWidget->addTab(idle_units_tab, QString());
        groups_tab = new QWidget();
        groups_tab->setObjectName(QStringLiteral("groups_tab"));
        group_tabWidget = new QTabWidget(groups_tab);
        group_tabWidget->setObjectName(QStringLiteral("group_tabWidget"));
        group_tabWidget->setGeometry(QRect(10, 10, 281, 311));
        groupA_tab = new QWidget();
        groupA_tab->setObjectName(QStringLiteral("groupA_tab"));
        all_units_tableWidget_2 = new QTableWidget(groupA_tab);
        if (all_units_tableWidget_2->columnCount() < 5)
            all_units_tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        all_units_tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        all_units_tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        all_units_tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        all_units_tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        all_units_tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem25);
        if (all_units_tableWidget_2->rowCount() < 14)
            all_units_tableWidget_2->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        all_units_tableWidget_2->setItem(0, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        all_units_tableWidget_2->setItem(1, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        all_units_tableWidget_2->setItem(2, 0, __qtablewidgetitem28);
        all_units_tableWidget_2->setObjectName(QStringLiteral("all_units_tableWidget_2"));
        all_units_tableWidget_2->setGeometry(QRect(10, 10, 251, 261));
        all_units_tableWidget_2->setAcceptDrops(true);
        all_units_tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        all_units_tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_units_tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        all_units_tableWidget_2->setDragDropOverwriteMode(true);
        all_units_tableWidget_2->setDragDropMode(QAbstractItemView::DragDrop);
        all_units_tableWidget_2->setDefaultDropAction(Qt::CopyAction);
        all_units_tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        all_units_tableWidget_2->setRowCount(14);
        all_units_tableWidget_2->setColumnCount(5);
        all_units_tableWidget_2->horizontalHeader()->setDefaultSectionSize(56);
        all_units_tableWidget_2->verticalHeader()->setVisible(false);
        all_units_tableWidget_2->verticalHeader()->setDefaultSectionSize(20);
        group_tabWidget->addTab(groupA_tab, QString());
        groupB_tab = new QWidget();
        groupB_tab->setObjectName(QStringLiteral("groupB_tab"));
        all_units_tableWidget_3 = new QTableWidget(groupB_tab);
        if (all_units_tableWidget_3->columnCount() < 5)
            all_units_tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        all_units_tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        all_units_tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        all_units_tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        all_units_tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        all_units_tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem33);
        if (all_units_tableWidget_3->rowCount() < 14)
            all_units_tableWidget_3->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        all_units_tableWidget_3->setItem(0, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        all_units_tableWidget_3->setItem(1, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        all_units_tableWidget_3->setItem(2, 0, __qtablewidgetitem36);
        all_units_tableWidget_3->setObjectName(QStringLiteral("all_units_tableWidget_3"));
        all_units_tableWidget_3->setGeometry(QRect(10, 10, 251, 261));
        all_units_tableWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        all_units_tableWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_units_tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        all_units_tableWidget_3->setDragDropMode(QAbstractItemView::DragDrop);
        all_units_tableWidget_3->setDefaultDropAction(Qt::CopyAction);
        all_units_tableWidget_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        all_units_tableWidget_3->setRowCount(14);
        all_units_tableWidget_3->setColumnCount(5);
        all_units_tableWidget_3->horizontalHeader()->setDefaultSectionSize(56);
        all_units_tableWidget_3->verticalHeader()->setVisible(false);
        all_units_tableWidget_3->verticalHeader()->setDefaultSectionSize(20);
        group_tabWidget->addTab(groupB_tab, QString());
        groupC_tab = new QWidget();
        groupC_tab->setObjectName(QStringLiteral("groupC_tab"));
        all_units_tableWidget_4 = new QTableWidget(groupC_tab);
        if (all_units_tableWidget_4->columnCount() < 5)
            all_units_tableWidget_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        all_units_tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        all_units_tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        all_units_tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        all_units_tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        all_units_tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem41);
        if (all_units_tableWidget_4->rowCount() < 14)
            all_units_tableWidget_4->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        all_units_tableWidget_4->setItem(0, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        all_units_tableWidget_4->setItem(1, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        all_units_tableWidget_4->setItem(2, 0, __qtablewidgetitem44);
        all_units_tableWidget_4->setObjectName(QStringLiteral("all_units_tableWidget_4"));
        all_units_tableWidget_4->setGeometry(QRect(10, 10, 251, 261));
        all_units_tableWidget_4->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        all_units_tableWidget_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_units_tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
        all_units_tableWidget_4->setDragDropMode(QAbstractItemView::DragDrop);
        all_units_tableWidget_4->setDefaultDropAction(Qt::CopyAction);
        all_units_tableWidget_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        all_units_tableWidget_4->setRowCount(14);
        all_units_tableWidget_4->setColumnCount(5);
        all_units_tableWidget_4->horizontalHeader()->setDefaultSectionSize(56);
        all_units_tableWidget_4->verticalHeader()->setVisible(false);
        all_units_tableWidget_4->verticalHeader()->setDefaultSectionSize(20);
        group_tabWidget->addTab(groupC_tab, QString());
        groupD_tab = new QWidget();
        groupD_tab->setObjectName(QStringLiteral("groupD_tab"));
        all_units_tableWidget_5 = new QTableWidget(groupD_tab);
        if (all_units_tableWidget_5->columnCount() < 5)
            all_units_tableWidget_5->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        all_units_tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        all_units_tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        all_units_tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        all_units_tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        all_units_tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem49);
        if (all_units_tableWidget_5->rowCount() < 14)
            all_units_tableWidget_5->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        all_units_tableWidget_5->setItem(0, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        all_units_tableWidget_5->setItem(1, 0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        all_units_tableWidget_5->setItem(2, 0, __qtablewidgetitem52);
        all_units_tableWidget_5->setObjectName(QStringLiteral("all_units_tableWidget_5"));
        all_units_tableWidget_5->setGeometry(QRect(10, 10, 251, 261));
        all_units_tableWidget_5->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        all_units_tableWidget_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_units_tableWidget_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
        all_units_tableWidget_5->setDragDropMode(QAbstractItemView::DragDrop);
        all_units_tableWidget_5->setDefaultDropAction(Qt::CopyAction);
        all_units_tableWidget_5->setSelectionBehavior(QAbstractItemView::SelectRows);
        all_units_tableWidget_5->setRowCount(14);
        all_units_tableWidget_5->setColumnCount(5);
        all_units_tableWidget_5->horizontalHeader()->setDefaultSectionSize(56);
        all_units_tableWidget_5->verticalHeader()->setVisible(false);
        all_units_tableWidget_5->verticalHeader()->setDefaultSectionSize(20);
        group_tabWidget->addTab(groupD_tab, QString());
        unit_selection_tabWidget->addTab(groups_tab, QString());
        all_units_tab = new QWidget();
        all_units_tab->setObjectName(QStringLiteral("all_units_tab"));
        all_units_tableWidget = new QTableWidget(all_units_tab);
        if (all_units_tableWidget->columnCount() < 5)
            all_units_tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        all_units_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        all_units_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        all_units_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        all_units_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        all_units_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem57);
        if (all_units_tableWidget->rowCount() < 14)
            all_units_tableWidget->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        all_units_tableWidget->setItem(0, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        all_units_tableWidget->setItem(1, 0, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        all_units_tableWidget->setItem(2, 0, __qtablewidgetitem60);
        all_units_tableWidget->setObjectName(QStringLiteral("all_units_tableWidget"));
        all_units_tableWidget->setGeometry(QRect(10, 10, 281, 301));
        all_units_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        all_units_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_units_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        all_units_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        all_units_tableWidget->setRowCount(14);
        all_units_tableWidget->setColumnCount(5);
        all_units_tableWidget->horizontalHeader()->setDefaultSectionSize(56);
        all_units_tableWidget->verticalHeader()->setVisible(false);
        all_units_tableWidget->verticalHeader()->setDefaultSectionSize(20);
        unit_selection_tabWidget->addTab(all_units_tab, QString());
        attack_commandLinkButton = new QCommandLinkButton(command_tab);
        attack_commandLinkButton->setObjectName(QStringLiteral("attack_commandLinkButton"));
        attack_commandLinkButton->setGeometry(QRect(340, 150, 91, 41));
        move_commandLinkButton = new QCommandLinkButton(command_tab);
        move_commandLinkButton->setObjectName(QStringLiteral("move_commandLinkButton"));
        move_commandLinkButton->setGeometry(QRect(340, 100, 91, 41));
        defend_commandLinkButton = new QCommandLinkButton(command_tab);
        defend_commandLinkButton->setObjectName(QStringLiteral("defend_commandLinkButton"));
        defend_commandLinkButton->setGeometry(QRect(340, 200, 91, 41));
        stop_commandLinkButton = new QCommandLinkButton(command_tab);
        stop_commandLinkButton->setObjectName(QStringLiteral("stop_commandLinkButton"));
        stop_commandLinkButton->setGeometry(QRect(340, 300, 91, 41));
        select_all_pushButton = new QPushButton(command_tab);
        select_all_pushButton->setObjectName(QStringLiteral("select_all_pushButton"));
        select_all_pushButton->setGeometry(QRect(340, 20, 91, 23));
        verticalLayoutWidget_6 = new QWidget(command_tab);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(340, 50, 91, 41));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        grouping_label = new QLabel(verticalLayoutWidget_6);
        grouping_label->setObjectName(QStringLiteral("grouping_label"));
        grouping_label->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(grouping_label);

        group_selection_comboBox = new QComboBox(verticalLayoutWidget_6);
        group_selection_comboBox->setObjectName(QStringLiteral("group_selection_comboBox"));

        verticalLayout_8->addWidget(group_selection_comboBox);

        heal_commandLinkButton = new QCommandLinkButton(command_tab);
        heal_commandLinkButton->setObjectName(QStringLiteral("heal_commandLinkButton"));
        heal_commandLinkButton->setGeometry(QRect(340, 250, 91, 41));
        control_tabWidget->addTab(command_tab, QString());
        construction_tab = new QWidget();
        construction_tab->setObjectName(QStringLiteral("construction_tab"));
        construction_tabWidget = new QTabWidget(construction_tab);
        construction_tabWidget->setObjectName(QStringLiteral("construction_tabWidget"));
        construction_tabWidget->setGeometry(QRect(10, 10, 151, 331));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(construction_tabWidget->sizePolicy().hasHeightForWidth());
        construction_tabWidget->setSizePolicy(sizePolicy4);
        construction_tabWidget->setTabPosition(QTabWidget::West);
        troop_construction_tab = new QWidget();
        troop_construction_tab->setObjectName(QStringLiteral("troop_construction_tab"));
        troop_construction_listWidget = new QListWidget(troop_construction_tab);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        new QListWidgetItem(troop_construction_listWidget);
        troop_construction_listWidget->setObjectName(QStringLiteral("troop_construction_listWidget"));
        troop_construction_listWidget->setGeometry(QRect(10, 10, 101, 301));
        sizePolicy3.setHeightForWidth(troop_construction_listWidget->sizePolicy().hasHeightForWidth());
        troop_construction_listWidget->setSizePolicy(sizePolicy3);
        construction_tabWidget->addTab(troop_construction_tab, QString());
        vehicle_construction_tab = new QWidget();
        vehicle_construction_tab->setObjectName(QStringLiteral("vehicle_construction_tab"));
        vehicle_construction_listWidget = new QListWidget(vehicle_construction_tab);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        new QListWidgetItem(vehicle_construction_listWidget);
        vehicle_construction_listWidget->setObjectName(QStringLiteral("vehicle_construction_listWidget"));
        vehicle_construction_listWidget->setGeometry(QRect(10, 10, 101, 301));
        sizePolicy3.setHeightForWidth(vehicle_construction_listWidget->sizePolicy().hasHeightForWidth());
        vehicle_construction_listWidget->setSizePolicy(sizePolicy3);
        vehicle_construction_listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        construction_tabWidget->addTab(vehicle_construction_tab, QString());
        building_construction_tab = new QWidget();
        building_construction_tab->setObjectName(QStringLiteral("building_construction_tab"));
        building_construction_listWidget = new QListWidget(building_construction_tab);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        new QListWidgetItem(building_construction_listWidget);
        building_construction_listWidget->setObjectName(QStringLiteral("building_construction_listWidget"));
        building_construction_listWidget->setGeometry(QRect(10, 10, 101, 301));
        sizePolicy3.setHeightForWidth(building_construction_listWidget->sizePolicy().hasHeightForWidth());
        building_construction_listWidget->setSizePolicy(sizePolicy3);
        building_construction_listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        construction_tabWidget->addTab(building_construction_tab, QString());
        construction_in_progress_tab = new QWidget();
        construction_in_progress_tab->setObjectName(QStringLiteral("construction_in_progress_tab"));
        construction_in_progress_listWidget = new QListWidget(construction_in_progress_tab);
        construction_in_progress_listWidget->setObjectName(QStringLiteral("construction_in_progress_listWidget"));
        construction_in_progress_listWidget->setGeometry(QRect(10, 10, 101, 301));
        construction_tabWidget->addTab(construction_in_progress_tab, QString());
        layoutWidget = new QWidget(construction_tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 10, 251, 81));
        verticalLayout_16 = new QVBoxLayout(layoutWidget);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        construction_description_label = new QLabel(layoutWidget);
        construction_description_label->setObjectName(QStringLiteral("construction_description_label"));
        construction_description_label->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(construction_description_label);

        construction_info_textBrowser = new QTextBrowser(layoutWidget);
        construction_info_textBrowser->setObjectName(QStringLiteral("construction_info_textBrowser"));
        sizePolicy.setHeightForWidth(construction_info_textBrowser->sizePolicy().hasHeightForWidth());
        construction_info_textBrowser->setSizePolicy(sizePolicy);

        verticalLayout_16->addWidget(construction_info_textBrowser);

        layoutWidget1 = new QWidget(construction_tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 240, 251, 42));
        verticalLayout_19 = new QVBoxLayout(layoutWidget1);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        construction_progress_label = new QLabel(layoutWidget1);
        construction_progress_label->setObjectName(QStringLiteral("construction_progress_label"));
        construction_progress_label->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(construction_progress_label);

        construction_progressBar = new QProgressBar(layoutWidget1);
        construction_progressBar->setObjectName(QStringLiteral("construction_progressBar"));
        sizePolicy.setHeightForWidth(construction_progressBar->sizePolicy().hasHeightForWidth());
        construction_progressBar->setSizePolicy(sizePolicy);
        construction_progressBar->setMinimum(0);
        construction_progressBar->setMaximum(1);
        construction_progressBar->setValue(1);

        verticalLayout_19->addWidget(construction_progressBar);

        verticalLayoutWidget = new QWidget(construction_tab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 100, 251, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        consturciton_stats_label = new QLabel(verticalLayoutWidget);
        consturciton_stats_label->setObjectName(QStringLiteral("consturciton_stats_label"));
        consturciton_stats_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(consturciton_stats_label);

        construction_stat_tableWidget = new QTableWidget(verticalLayoutWidget);
        if (construction_stat_tableWidget->columnCount() < 5)
            construction_stat_tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        construction_stat_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        construction_stat_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        construction_stat_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        construction_stat_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        construction_stat_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem65);
        if (construction_stat_tableWidget->rowCount() < 1)
            construction_stat_tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_stat_tableWidget->setItem(0, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_stat_tableWidget->setItem(0, 1, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_stat_tableWidget->setItem(0, 2, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_stat_tableWidget->setItem(0, 3, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_stat_tableWidget->setItem(0, 4, __qtablewidgetitem70);
        construction_stat_tableWidget->setObjectName(QStringLiteral("construction_stat_tableWidget"));
        sizePolicy.setHeightForWidth(construction_stat_tableWidget->sizePolicy().hasHeightForWidth());
        construction_stat_tableWidget->setSizePolicy(sizePolicy);
        construction_stat_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        construction_stat_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        construction_stat_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        construction_stat_tableWidget->setTabKeyNavigation(false);
        construction_stat_tableWidget->setDragDropOverwriteMode(false);
        construction_stat_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        construction_stat_tableWidget->setTextElideMode(Qt::ElideRight);
        construction_stat_tableWidget->setRowCount(1);
        construction_stat_tableWidget->setColumnCount(5);
        construction_stat_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        construction_stat_tableWidget->horizontalHeader()->setDefaultSectionSize(50);
        construction_stat_tableWidget->horizontalHeader()->setStretchLastSection(true);
        construction_stat_tableWidget->verticalHeader()->setVisible(false);
        construction_stat_tableWidget->verticalHeader()->setDefaultSectionSize(25);
        construction_stat_tableWidget->verticalHeader()->setMinimumSectionSize(10);
        construction_stat_tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(construction_stat_tableWidget);

        verticalLayoutWidget_2 = new QWidget(construction_tab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 170, 251, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        construction_cost_label = new QLabel(verticalLayoutWidget_2);
        construction_cost_label->setObjectName(QStringLiteral("construction_cost_label"));
        construction_cost_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(construction_cost_label);

        construction_cost_tableWidget = new QTableWidget(verticalLayoutWidget_2);
        if (construction_cost_tableWidget->columnCount() < 5)
            construction_cost_tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        construction_cost_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        construction_cost_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        construction_cost_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        construction_cost_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        construction_cost_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem75);
        if (construction_cost_tableWidget->rowCount() < 1)
            construction_cost_tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        __qtablewidgetitem76->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_cost_tableWidget->setItem(0, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        __qtablewidgetitem77->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_cost_tableWidget->setItem(0, 1, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        __qtablewidgetitem78->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_cost_tableWidget->setItem(0, 2, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        __qtablewidgetitem79->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_cost_tableWidget->setItem(0, 3, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        __qtablewidgetitem80->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        construction_cost_tableWidget->setItem(0, 4, __qtablewidgetitem80);
        construction_cost_tableWidget->setObjectName(QStringLiteral("construction_cost_tableWidget"));
        sizePolicy.setHeightForWidth(construction_cost_tableWidget->sizePolicy().hasHeightForWidth());
        construction_cost_tableWidget->setSizePolicy(sizePolicy);
        construction_cost_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        construction_cost_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        construction_cost_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        construction_cost_tableWidget->setTabKeyNavigation(false);
        construction_cost_tableWidget->setProperty("showDropIndicator", QVariant(false));
        construction_cost_tableWidget->setDragDropOverwriteMode(false);
        construction_cost_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        construction_cost_tableWidget->setRowCount(1);
        construction_cost_tableWidget->setColumnCount(5);
        construction_cost_tableWidget->horizontalHeader()->setDefaultSectionSize(50);
        construction_cost_tableWidget->horizontalHeader()->setStretchLastSection(true);
        construction_cost_tableWidget->verticalHeader()->setVisible(false);
        construction_cost_tableWidget->verticalHeader()->setDefaultSectionSize(25);
        construction_cost_tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(construction_cost_tableWidget);

        widget = new QWidget(construction_tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(172, 288, 51, 41));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        construction_quantity_label = new QLabel(widget);
        construction_quantity_label->setObjectName(QStringLiteral("construction_quantity_label"));

        verticalLayout_4->addWidget(construction_quantity_label);

        construction_quantity_spinBox = new QSpinBox(widget);
        construction_quantity_spinBox->setObjectName(QStringLiteral("construction_quantity_spinBox"));
        sizePolicy.setHeightForWidth(construction_quantity_spinBox->sizePolicy().hasHeightForWidth());
        construction_quantity_spinBox->setSizePolicy(sizePolicy);
        construction_quantity_spinBox->setMaximum(9999);

        verticalLayout_4->addWidget(construction_quantity_spinBox);

        build_commandLinkButton = new QCommandLinkButton(construction_tab);
        build_commandLinkButton->setObjectName(QStringLiteral("build_commandLinkButton"));
        build_commandLinkButton->setGeometry(QRect(230, 290, 91, 41));
        cancel_construction_commandLinkButton = new QCommandLinkButton(construction_tab);
        cancel_construction_commandLinkButton->setObjectName(QStringLiteral("cancel_construction_commandLinkButton"));
        cancel_construction_commandLinkButton->setGeometry(QRect(330, 290, 91, 41));
        control_tabWidget->addTab(construction_tab, QString());
        research_tab = new QWidget();
        research_tab->setObjectName(QStringLiteral("research_tab"));
        research_tabWidget = new QTabWidget(research_tab);
        research_tabWidget->setObjectName(QStringLiteral("research_tabWidget"));
        research_tabWidget->setGeometry(QRect(10, 10, 201, 331));
        research_tabWidget->setTabPosition(QTabWidget::West);
        troops_research_tab = new QWidget();
        troops_research_tab->setObjectName(QStringLiteral("troops_research_tab"));
        troops_research_treeWidget = new QTreeWidget(troops_research_tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(troops_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem7);
        troops_research_treeWidget->setObjectName(QStringLiteral("troops_research_treeWidget"));
        troops_research_treeWidget->setGeometry(QRect(10, 10, 151, 301));
        sizePolicy3.setHeightForWidth(troops_research_treeWidget->sizePolicy().hasHeightForWidth());
        troops_research_treeWidget->setSizePolicy(sizePolicy3);
        research_tabWidget->addTab(troops_research_tab, QString());
        vehicles_research_tab = new QWidget();
        vehicles_research_tab->setObjectName(QStringLiteral("vehicles_research_tab"));
        vehicle_research_treeWidget = new QTreeWidget(vehicles_research_tab);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem8);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem9);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem10);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem11);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem12);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem13);
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem14);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem15);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem16);
        QTreeWidgetItem *__qtreewidgetitem17 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem17);
        QTreeWidgetItem *__qtreewidgetitem18 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem18);
        QTreeWidgetItem *__qtreewidgetitem19 = new QTreeWidgetItem(vehicle_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem19);
        vehicle_research_treeWidget->setObjectName(QStringLiteral("vehicle_research_treeWidget"));
        vehicle_research_treeWidget->setGeometry(QRect(10, 10, 151, 301));
        sizePolicy3.setHeightForWidth(vehicle_research_treeWidget->sizePolicy().hasHeightForWidth());
        vehicle_research_treeWidget->setSizePolicy(sizePolicy3);
        research_tabWidget->addTab(vehicles_research_tab, QString());
        buildings_research_tab = new QWidget();
        buildings_research_tab->setObjectName(QStringLiteral("buildings_research_tab"));
        building_research_treeWidget = new QTreeWidget(buildings_research_tab);
        QTreeWidgetItem *__qtreewidgetitem20 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem20);
        QTreeWidgetItem *__qtreewidgetitem21 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem21);
        QTreeWidgetItem *__qtreewidgetitem22 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem22);
        new QTreeWidgetItem(__qtreewidgetitem22);
        QTreeWidgetItem *__qtreewidgetitem23 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem23);
        new QTreeWidgetItem(__qtreewidgetitem23);
        QTreeWidgetItem *__qtreewidgetitem24 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem24);
        new QTreeWidgetItem(__qtreewidgetitem24);
        new QTreeWidgetItem(__qtreewidgetitem24);
        QTreeWidgetItem *__qtreewidgetitem25 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem25);
        new QTreeWidgetItem(__qtreewidgetitem25);
        QTreeWidgetItem *__qtreewidgetitem26 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem26);
        new QTreeWidgetItem(__qtreewidgetitem26);
        QTreeWidgetItem *__qtreewidgetitem27 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem27);
        QTreeWidgetItem *__qtreewidgetitem28 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem28);
        QTreeWidgetItem *__qtreewidgetitem29 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem29);
        new QTreeWidgetItem(__qtreewidgetitem29);
        new QTreeWidgetItem(__qtreewidgetitem29);
        QTreeWidgetItem *__qtreewidgetitem30 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem30);
        new QTreeWidgetItem(__qtreewidgetitem30);
        QTreeWidgetItem *__qtreewidgetitem31 = new QTreeWidgetItem(building_research_treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem31);
        new QTreeWidgetItem(__qtreewidgetitem31);
        building_research_treeWidget->setObjectName(QStringLiteral("building_research_treeWidget"));
        building_research_treeWidget->setGeometry(QRect(10, 10, 151, 301));
        sizePolicy3.setHeightForWidth(building_research_treeWidget->sizePolicy().hasHeightForWidth());
        building_research_treeWidget->setSizePolicy(sizePolicy3);
        research_tabWidget->addTab(buildings_research_tab, QString());
        in_progress_research_tab = new QWidget();
        in_progress_research_tab->setObjectName(QStringLiteral("in_progress_research_tab"));
        research_in_progress_listWidget_2 = new QListWidget(in_progress_research_tab);
        research_in_progress_listWidget_2->setObjectName(QStringLiteral("research_in_progress_listWidget_2"));
        research_in_progress_listWidget_2->setGeometry(QRect(10, 10, 151, 301));
        research_tabWidget->addTab(in_progress_research_tab, QString());
        horizontalLayoutWidget = new QWidget(research_tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(220, 300, 201, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        research_commandLinkButton = new QCommandLinkButton(horizontalLayoutWidget);
        research_commandLinkButton->setObjectName(QStringLiteral("research_commandLinkButton"));

        horizontalLayout_3->addWidget(research_commandLinkButton);

        cancel_research_commandLinkButton = new QCommandLinkButton(horizontalLayoutWidget);
        cancel_research_commandLinkButton->setObjectName(QStringLiteral("cancel_research_commandLinkButton"));

        horizontalLayout_3->addWidget(cancel_research_commandLinkButton);

        verticalLayoutWidget_3 = new QWidget(research_tab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(220, 250, 201, 41));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        research_progress_label = new QLabel(verticalLayoutWidget_3);
        research_progress_label->setObjectName(QStringLiteral("research_progress_label"));
        research_progress_label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(research_progress_label);

        research_progressBar = new QProgressBar(verticalLayoutWidget_3);
        research_progressBar->setObjectName(QStringLiteral("research_progressBar"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(research_progressBar->sizePolicy().hasHeightForWidth());
        research_progressBar->setSizePolicy(sizePolicy5);
        research_progressBar->setValue(100);

        verticalLayout_5->addWidget(research_progressBar);

        verticalLayoutWidget_4 = new QWidget(research_tab);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(219, 10, 201, 151));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        research_description_label = new QLabel(verticalLayoutWidget_4);
        research_description_label->setObjectName(QStringLiteral("research_description_label"));
        research_description_label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(research_description_label);

        research_info_textBrowser = new QTextBrowser(verticalLayoutWidget_4);
        research_info_textBrowser->setObjectName(QStringLiteral("research_info_textBrowser"));
        sizePolicy.setHeightForWidth(research_info_textBrowser->sizePolicy().hasHeightForWidth());
        research_info_textBrowser->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(research_info_textBrowser);

        verticalLayoutWidget_5 = new QWidget(research_tab);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(220, 170, 201, 71));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        research_cost_label = new QLabel(verticalLayoutWidget_5);
        research_cost_label->setObjectName(QStringLiteral("research_cost_label"));
        research_cost_label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(research_cost_label);

        research_cost_tableWidget = new QTableWidget(verticalLayoutWidget_5);
        if (research_cost_tableWidget->columnCount() < 4)
            research_cost_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        research_cost_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        research_cost_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        research_cost_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        research_cost_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem84);
        if (research_cost_tableWidget->rowCount() < 1)
            research_cost_tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        research_cost_tableWidget->setItem(0, 0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        research_cost_tableWidget->setItem(0, 1, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        __qtablewidgetitem87->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        research_cost_tableWidget->setItem(0, 2, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        __qtablewidgetitem88->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        research_cost_tableWidget->setItem(0, 3, __qtablewidgetitem88);
        research_cost_tableWidget->setObjectName(QStringLiteral("research_cost_tableWidget"));
        sizePolicy.setHeightForWidth(research_cost_tableWidget->sizePolicy().hasHeightForWidth());
        research_cost_tableWidget->setSizePolicy(sizePolicy);
        research_cost_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        research_cost_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        research_cost_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        research_cost_tableWidget->setTabKeyNavigation(false);
        research_cost_tableWidget->setProperty("showDropIndicator", QVariant(false));
        research_cost_tableWidget->setDragDropOverwriteMode(false);
        research_cost_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        research_cost_tableWidget->setRowCount(1);
        research_cost_tableWidget->setColumnCount(4);
        research_cost_tableWidget->horizontalHeader()->setDefaultSectionSize(50);
        research_cost_tableWidget->verticalHeader()->setVisible(false);
        research_cost_tableWidget->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout_7->addWidget(research_cost_tableWidget);

        control_tabWidget->addTab(research_tab, QString());
        map_tableWidget = new QTableWidget(centralWidget);
        if (map_tableWidget->columnCount() < 100)
            map_tableWidget->setColumnCount(100);
        if (map_tableWidget->rowCount() < 100)
            map_tableWidget->setRowCount(100);
        map_tableWidget->setObjectName(QStringLiteral("map_tableWidget"));
        map_tableWidget->setGeometry(QRect(240, 8, 671, 641));
        sizePolicy1.setHeightForWidth(map_tableWidget->sizePolicy().hasHeightForWidth());
        map_tableWidget->setSizePolicy(sizePolicy1);
        map_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        map_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        map_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        map_tableWidget->setRowCount(100);
        map_tableWidget->setColumnCount(100);
        map_tableWidget->horizontalHeader()->setDefaultSectionSize(20);
        map_tableWidget->verticalHeader()->setVisible(true);
        map_tableWidget->verticalHeader()->setDefaultSectionSize(20);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 221, 221));
        verticalLayout_12 = new QVBoxLayout(layoutWidget2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        notifications_label = new QLabel(layoutWidget2);
        notifications_label->setObjectName(QStringLiteral("notifications_label"));
        sizePolicy5.setHeightForWidth(notifications_label->sizePolicy().hasHeightForWidth());
        notifications_label->setSizePolicy(sizePolicy5);
        notifications_label->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(notifications_label);

        notifications_listWidget = new QListWidget(layoutWidget2);
        notifications_listWidget->setObjectName(QStringLiteral("notifications_listWidget"));

        verticalLayout_12->addWidget(notifications_listWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        dismiss_notification_pushButton = new QPushButton(layoutWidget2);
        dismiss_notification_pushButton->setObjectName(QStringLiteral("dismiss_notification_pushButton"));
        sizePolicy5.setHeightForWidth(dismiss_notification_pushButton->sizePolicy().hasHeightForWidth());
        dismiss_notification_pushButton->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(dismiss_notification_pushButton);

        dismiss_all_notifications_pushButton = new QPushButton(layoutWidget2);
        dismiss_all_notifications_pushButton->setObjectName(QStringLiteral("dismiss_all_notifications_pushButton"));
        sizePolicy5.setHeightForWidth(dismiss_all_notifications_pushButton->sizePolicy().hasHeightForWidth());
        dismiss_all_notifications_pushButton->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(dismiss_all_notifications_pushButton);


        verticalLayout_12->addLayout(horizontalLayout_5);

        verticalLayoutWidget_7 = new QWidget(centralWidget);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 410, 221, 241));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        minimap_label = new QLabel(verticalLayoutWidget_7);
        minimap_label->setObjectName(QStringLiteral("minimap_label"));
        minimap_label->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(minimap_label);

        minimap_tableWidget = new QTableWidget(verticalLayoutWidget_7);
        if (minimap_tableWidget->columnCount() < 10)
            minimap_tableWidget->setColumnCount(10);
        if (minimap_tableWidget->rowCount() < 10)
            minimap_tableWidget->setRowCount(10);
        minimap_tableWidget->setObjectName(QStringLiteral("minimap_tableWidget"));
        sizePolicy.setHeightForWidth(minimap_tableWidget->sizePolicy().hasHeightForWidth());
        minimap_tableWidget->setSizePolicy(sizePolicy);
        minimap_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minimap_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minimap_tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        minimap_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        minimap_tableWidget->setRowCount(10);
        minimap_tableWidget->setColumnCount(10);
        minimap_tableWidget->horizontalHeader()->setDefaultSectionSize(20);
        minimap_tableWidget->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_11->addWidget(minimap_tableWidget);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(1300, 10, 61, 51));
        verticalLayout_15 = new QVBoxLayout(widget1);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        clockLabel = new QLabel(widget1);
        clockLabel->setObjectName(QStringLiteral("clockLabel"));
        clockLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(clockLabel);

        clockLCD = new QLCDNumber(widget1);
        clockLCD->setObjectName(QStringLiteral("clockLCD"));
        sizePolicy.setHeightForWidth(clockLCD->sizePolicy().hasHeightForWidth());
        clockLCD->setSizePolicy(sizePolicy);
        clockLCD->setFrameShape(QFrame::Box);
        clockLCD->setDigitCount(4);

        verticalLayout_15->addWidget(clockLCD);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(921, 11, 371, 61));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        resources_label = new QLabel(widget2);
        resources_label->setObjectName(QStringLiteral("resources_label"));
        sizePolicy.setHeightForWidth(resources_label->sizePolicy().hasHeightForWidth());
        resources_label->setSizePolicy(sizePolicy);
        resources_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resources_label);

        resourceTable = new QTableWidget(widget2);
        if (resourceTable->columnCount() < 6)
            resourceTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        resourceTable->setHorizontalHeaderItem(0, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        resourceTable->setHorizontalHeaderItem(1, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        resourceTable->setHorizontalHeaderItem(2, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        resourceTable->setHorizontalHeaderItem(3, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        resourceTable->setHorizontalHeaderItem(4, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        resourceTable->setHorizontalHeaderItem(5, __qtablewidgetitem94);
        if (resourceTable->rowCount() < 1)
            resourceTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        __qtablewidgetitem95->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem95->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        resourceTable->setItem(0, 0, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        __qtablewidgetitem96->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem96->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        resourceTable->setItem(0, 1, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        __qtablewidgetitem97->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem97->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        resourceTable->setItem(0, 2, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        __qtablewidgetitem98->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem98->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        resourceTable->setItem(0, 3, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        __qtablewidgetitem99->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem99->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        resourceTable->setItem(0, 4, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        __qtablewidgetitem100->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem100->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        resourceTable->setItem(0, 5, __qtablewidgetitem100);
        resourceTable->setObjectName(QStringLiteral("resourceTable"));
        sizePolicy.setHeightForWidth(resourceTable->sizePolicy().hasHeightForWidth());
        resourceTable->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(8);
        resourceTable->setFont(font);
        resourceTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        resourceTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        resourceTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        resourceTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resourceTable->setTabKeyNavigation(false);
        resourceTable->setProperty("showDropIndicator", QVariant(false));
        resourceTable->setDragDropOverwriteMode(false);
        resourceTable->setSelectionMode(QAbstractItemView::NoSelection);
        resourceTable->setRowCount(1);
        resourceTable->horizontalHeader()->setDefaultSectionSize(61);
        resourceTable->horizontalHeader()->setHighlightSections(false);
        resourceTable->horizontalHeader()->setStretchLastSection(true);
        resourceTable->verticalHeader()->setVisible(false);
        resourceTable->verticalHeader()->setDefaultSectionSize(16);
        resourceTable->verticalHeader()->setHighlightSections(false);
        resourceTable->verticalHeader()->setMinimumSectionSize(20);
        resourceTable->verticalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(resourceTable);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 21));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QStringLiteral("menuGame"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuNotifications_2 = new QMenu(menuOptions);
        menuNotifications_2->setObjectName(QStringLiteral("menuNotifications_2"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGame->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuGame->addAction(actionSave);
        menuGame->addAction(actionLoad);
        menuGame->addAction(actionPause);
        menuGame->addAction(actionQuit);
        menuOptions->addAction(menuNotifications_2->menuAction());
        menuNotifications_2->addAction(actionCombat_2);
        menuNotifications_2->addAction(actionConstruction_2);
        menuNotifications_2->addAction(actionResearch_2);
        menuHelp->addAction(actionGlossary);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        control_tabWidget->setCurrentIndex(0);
        unit_selection_tabWidget->setCurrentIndex(0);
        group_tabWidget->setCurrentIndex(0);
        construction_tabWidget->setCurrentIndex(0);
        troop_construction_listWidget->setCurrentRow(-1);
        vehicle_construction_listWidget->setCurrentRow(-1);
        building_construction_listWidget->setCurrentRow(-1);
        research_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NonGraphicalRTS", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionLayout->setText(QApplication::translate("MainWindow", "Layout", 0));
        actionUpdate->setText(QApplication::translate("MainWindow", "Update", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionGlossary->setText(QApplication::translate("MainWindow", "Instructions", 0));
        actionEasy->setText(QApplication::translate("MainWindow", "Easy", 0));
        actionMedium->setText(QApplication::translate("MainWindow", "Medium", 0));
        actionHard->setText(QApplication::translate("MainWindow", "Hard", 0));
        actionSlow->setText(QApplication::translate("MainWindow", "Slow", 0));
        actionMedium_2->setText(QApplication::translate("MainWindow", "Medium", 0));
        actionFast->setText(QApplication::translate("MainWindow", "Fast", 0));
        actionCombat->setText(QApplication::translate("MainWindow", "Combat", 0));
        actionConstruction->setText(QApplication::translate("MainWindow", "Construction", 0));
        actionResearch->setText(QApplication::translate("MainWindow", "Research", 0));
        action1366_X_720->setText(QApplication::translate("MainWindow", "1366 X 720", 0));
        action1920_X_1200->setText(QApplication::translate("MainWindow", "1920 X 1200", 0));
        actionMessages->setText(QApplication::translate("MainWindow", "Messages", 0));
        actionSpeed->setText(QApplication::translate("MainWindow", "Speed", 0));
        actionShow_All->setText(QApplication::translate("MainWindow", "Show All", 0));
        actionConstruction_2->setText(QApplication::translate("MainWindow", "Construction", 0));
        actionResearch_2->setText(QApplication::translate("MainWindow", "Research", 0));
        actionCombat_2->setText(QApplication::translate("MainWindow", "Combat", 0));
        actionDifficulty->setText(QApplication::translate("MainWindow", "Difficulty", 0));
        actionSmall->setText(QApplication::translate("MainWindow", "10 X 10", 0));
        actionMedium_3->setText(QApplication::translate("MainWindow", "Medium", 0));
        actionSlow_2->setText(QApplication::translate("MainWindow", "Slow", 0));
        actionFast_2->setText(QApplication::translate("MainWindow", "Fast", 0));
        actionFaster->setText(QApplication::translate("MainWindow", "Faster", 0));
        actionMap->setText(QApplication::translate("MainWindow", "Map", 0));
        QTableWidgetItem *___qtablewidgetitem = attacking_units_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem1 = attacking_units_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem2 = attacking_units_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem3 = attacking_units_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled = attacking_units_tableWidget->isSortingEnabled();
        attacking_units_tableWidget->setSortingEnabled(false);
        attacking_units_tableWidget->setSortingEnabled(__sortingEnabled);

        unit_selection_tabWidget->setTabText(unit_selection_tabWidget->indexOf(attacking_units_tab), QApplication::translate("MainWindow", "Attacking", 0));
        QTableWidgetItem *___qtablewidgetitem4 = defending_units_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem5 = defending_units_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem6 = defending_units_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem7 = defending_units_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled1 = defending_units_tableWidget->isSortingEnabled();
        defending_units_tableWidget->setSortingEnabled(false);
        defending_units_tableWidget->setSortingEnabled(__sortingEnabled1);

        unit_selection_tabWidget->setTabText(unit_selection_tabWidget->indexOf(defending_units_tab), QApplication::translate("MainWindow", "Defending", 0));
        QTableWidgetItem *___qtablewidgetitem8 = idle_units_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem9 = idle_units_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem10 = idle_units_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem11 = idle_units_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled2 = idle_units_tableWidget->isSortingEnabled();
        idle_units_tableWidget->setSortingEnabled(false);
        idle_units_tableWidget->setSortingEnabled(__sortingEnabled2);

        unit_selection_tabWidget->setTabText(unit_selection_tabWidget->indexOf(idle_units_tab), QApplication::translate("MainWindow", "Idle", 0));
        QTableWidgetItem *___qtablewidgetitem12 = all_units_tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem13 = all_units_tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem14 = all_units_tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem15 = all_units_tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Action", 0));
        QTableWidgetItem *___qtablewidgetitem16 = all_units_tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled3 = all_units_tableWidget_2->isSortingEnabled();
        all_units_tableWidget_2->setSortingEnabled(false);
        all_units_tableWidget_2->setSortingEnabled(__sortingEnabled3);

        group_tabWidget->setTabText(group_tabWidget->indexOf(groupA_tab), QApplication::translate("MainWindow", "Group A", 0));
        QTableWidgetItem *___qtablewidgetitem17 = all_units_tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem18 = all_units_tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem19 = all_units_tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem20 = all_units_tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Action", 0));
        QTableWidgetItem *___qtablewidgetitem21 = all_units_tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled4 = all_units_tableWidget_3->isSortingEnabled();
        all_units_tableWidget_3->setSortingEnabled(false);
        all_units_tableWidget_3->setSortingEnabled(__sortingEnabled4);

        group_tabWidget->setTabText(group_tabWidget->indexOf(groupB_tab), QApplication::translate("MainWindow", "Group B", 0));
        QTableWidgetItem *___qtablewidgetitem22 = all_units_tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem23 = all_units_tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem24 = all_units_tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem25 = all_units_tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Action", 0));
        QTableWidgetItem *___qtablewidgetitem26 = all_units_tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled5 = all_units_tableWidget_4->isSortingEnabled();
        all_units_tableWidget_4->setSortingEnabled(false);
        all_units_tableWidget_4->setSortingEnabled(__sortingEnabled5);

        group_tabWidget->setTabText(group_tabWidget->indexOf(groupC_tab), QApplication::translate("MainWindow", "Group C", 0));
        QTableWidgetItem *___qtablewidgetitem27 = all_units_tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem28 = all_units_tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem29 = all_units_tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem30 = all_units_tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Action", 0));
        QTableWidgetItem *___qtablewidgetitem31 = all_units_tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled6 = all_units_tableWidget_5->isSortingEnabled();
        all_units_tableWidget_5->setSortingEnabled(false);
        all_units_tableWidget_5->setSortingEnabled(__sortingEnabled6);

        group_tabWidget->setTabText(group_tabWidget->indexOf(groupD_tab), QApplication::translate("MainWindow", "Group D", 0));
        unit_selection_tabWidget->setTabText(unit_selection_tabWidget->indexOf(groups_tab), QApplication::translate("MainWindow", "Groups", 0));
        QTableWidgetItem *___qtablewidgetitem32 = all_units_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "Unit", 0));
        QTableWidgetItem *___qtablewidgetitem33 = all_units_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem34 = all_units_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem35 = all_units_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "Action", 0));
        QTableWidgetItem *___qtablewidgetitem36 = all_units_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "Target", 0));

        const bool __sortingEnabled7 = all_units_tableWidget->isSortingEnabled();
        all_units_tableWidget->setSortingEnabled(false);
        all_units_tableWidget->setSortingEnabled(__sortingEnabled7);

        unit_selection_tabWidget->setTabText(unit_selection_tabWidget->indexOf(all_units_tab), QApplication::translate("MainWindow", "All", 0));
        attack_commandLinkButton->setText(QApplication::translate("MainWindow", "Attack", 0));
        move_commandLinkButton->setText(QApplication::translate("MainWindow", "Move", 0));
        defend_commandLinkButton->setText(QApplication::translate("MainWindow", "Defend", 0));
        stop_commandLinkButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        select_all_pushButton->setText(QApplication::translate("MainWindow", "Select All", 0));
        grouping_label->setText(QApplication::translate("MainWindow", "Group", 0));
        group_selection_comboBox->clear();
        group_selection_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0)
         << QApplication::translate("MainWindow", "Group A", 0)
         << QApplication::translate("MainWindow", "Group B", 0)
         << QApplication::translate("MainWindow", "Group C", 0)
         << QApplication::translate("MainWindow", "Group D", 0)
        );
        heal_commandLinkButton->setText(QApplication::translate("MainWindow", "Heal", 0));
        control_tabWidget->setTabText(control_tabWidget->indexOf(command_tab), QApplication::translate("MainWindow", "Command", 0));

        const bool __sortingEnabled8 = troop_construction_listWidget->isSortingEnabled();
        troop_construction_listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = troop_construction_listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Worker", 0));
        QListWidgetItem *___qlistwidgetitem1 = troop_construction_listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Engineer", 0));
        QListWidgetItem *___qlistwidgetitem2 = troop_construction_listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Scout", 0));
        QListWidgetItem *___qlistwidgetitem3 = troop_construction_listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Medic", 0));
        QListWidgetItem *___qlistwidgetitem4 = troop_construction_listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Soldier", 0));
        QListWidgetItem *___qlistwidgetitem5 = troop_construction_listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Sniper", 0));
        QListWidgetItem *___qlistwidgetitem6 = troop_construction_listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Grenadier", 0));
        QListWidgetItem *___qlistwidgetitem7 = troop_construction_listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Commando", 0));
        QListWidgetItem *___qlistwidgetitem8 = troop_construction_listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "Spy", 0));
        troop_construction_listWidget->setSortingEnabled(__sortingEnabled8);

        construction_tabWidget->setTabText(construction_tabWidget->indexOf(troop_construction_tab), QApplication::translate("MainWindow", "Troops", 0));

        const bool __sortingEnabled9 = vehicle_construction_listWidget->isSortingEnabled();
        vehicle_construction_listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem9 = vehicle_construction_listWidget->item(0);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "Humvee", 0));
        QListWidgetItem *___qlistwidgetitem10 = vehicle_construction_listWidget->item(1);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "Tank", 0));
        QListWidgetItem *___qlistwidgetitem11 = vehicle_construction_listWidget->item(2);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "Hovercraft", 0));
        QListWidgetItem *___qlistwidgetitem12 = vehicle_construction_listWidget->item(3);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "Helicopter", 0));
        QListWidgetItem *___qlistwidgetitem13 = vehicle_construction_listWidget->item(4);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "Fighter Jet", 0));
        QListWidgetItem *___qlistwidgetitem14 = vehicle_construction_listWidget->item(5);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "Bomber", 0));
        QListWidgetItem *___qlistwidgetitem15 = vehicle_construction_listWidget->item(6);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "Cargo Plane", 0));
        QListWidgetItem *___qlistwidgetitem16 = vehicle_construction_listWidget->item(7);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "Freighter", 0));
        QListWidgetItem *___qlistwidgetitem17 = vehicle_construction_listWidget->item(8);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "Carrier", 0));
        QListWidgetItem *___qlistwidgetitem18 = vehicle_construction_listWidget->item(9);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "Battleship", 0));
        QListWidgetItem *___qlistwidgetitem19 = vehicle_construction_listWidget->item(10);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "Destroyer", 0));
        QListWidgetItem *___qlistwidgetitem20 = vehicle_construction_listWidget->item(11);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "Submarine", 0));
        vehicle_construction_listWidget->setSortingEnabled(__sortingEnabled9);

        construction_tabWidget->setTabText(construction_tabWidget->indexOf(vehicle_construction_tab), QApplication::translate("MainWindow", "Vehicles", 0));

        const bool __sortingEnabled10 = building_construction_listWidget->isSortingEnabled();
        building_construction_listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem21 = building_construction_listWidget->item(0);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "Headquarters", 0));
        QListWidgetItem *___qlistwidgetitem22 = building_construction_listWidget->item(1);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "Barracks", 0));
        QListWidgetItem *___qlistwidgetitem23 = building_construction_listWidget->item(2);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "Commissary", 0));
        QListWidgetItem *___qlistwidgetitem24 = building_construction_listWidget->item(3);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "Infirmary", 0));
        QListWidgetItem *___qlistwidgetitem25 = building_construction_listWidget->item(4);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "Factory", 0));
        QListWidgetItem *___qlistwidgetitem26 = building_construction_listWidget->item(5);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "Armory", 0));
        QListWidgetItem *___qlistwidgetitem27 = building_construction_listWidget->item(6);
        ___qlistwidgetitem27->setText(QApplication::translate("MainWindow", "Research Facility", 0));
        QListWidgetItem *___qlistwidgetitem28 = building_construction_listWidget->item(7);
        ___qlistwidgetitem28->setText(QApplication::translate("MainWindow", "Hangar", 0));
        QListWidgetItem *___qlistwidgetitem29 = building_construction_listWidget->item(8);
        ___qlistwidgetitem29->setText(QApplication::translate("MainWindow", "Shipyard", 0));
        QListWidgetItem *___qlistwidgetitem30 = building_construction_listWidget->item(9);
        ___qlistwidgetitem30->setText(QApplication::translate("MainWindow", "Mess Hall", 0));
        QListWidgetItem *___qlistwidgetitem31 = building_construction_listWidget->item(10);
        ___qlistwidgetitem31->setText(QApplication::translate("MainWindow", "Water Tower", 0));
        QListWidgetItem *___qlistwidgetitem32 = building_construction_listWidget->item(11);
        ___qlistwidgetitem32->setText(QApplication::translate("MainWindow", "Fuel Tank", 0));
        QListWidgetItem *___qlistwidgetitem33 = building_construction_listWidget->item(12);
        ___qlistwidgetitem33->setText(QApplication::translate("MainWindow", "Gas Station", 0));
        QListWidgetItem *___qlistwidgetitem34 = building_construction_listWidget->item(13);
        ___qlistwidgetitem34->setText(QApplication::translate("MainWindow", "Power Plant", 0));
        building_construction_listWidget->setSortingEnabled(__sortingEnabled10);

        construction_tabWidget->setTabText(construction_tabWidget->indexOf(building_construction_tab), QApplication::translate("MainWindow", "Buildings", 0));
        construction_tabWidget->setTabText(construction_tabWidget->indexOf(construction_in_progress_tab), QApplication::translate("MainWindow", "In Progress", 0));
        construction_description_label->setText(QApplication::translate("MainWindow", "Description", 0));
        construction_progress_label->setText(QApplication::translate("MainWindow", "Progress", 0));
        construction_progressBar->setFormat(QApplication::translate("MainWindow", "%v/%m", 0));
        consturciton_stats_label->setText(QApplication::translate("MainWindow", "Stats", 0));
        QTableWidgetItem *___qtablewidgetitem37 = construction_stat_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "Health", 0));
        QTableWidgetItem *___qtablewidgetitem38 = construction_stat_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "Energy", 0));
        QTableWidgetItem *___qtablewidgetitem39 = construction_stat_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "Attack", 0));
        QTableWidgetItem *___qtablewidgetitem40 = construction_stat_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "Defense", 0));
        QTableWidgetItem *___qtablewidgetitem41 = construction_stat_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "Speed", 0));

        const bool __sortingEnabled11 = construction_stat_tableWidget->isSortingEnabled();
        construction_stat_tableWidget->setSortingEnabled(false);
        construction_stat_tableWidget->setSortingEnabled(__sortingEnabled11);

        construction_cost_label->setText(QApplication::translate("MainWindow", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem42 = construction_cost_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "Fuel", 0));
        QTableWidgetItem *___qtablewidgetitem43 = construction_cost_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "Power", 0));
        QTableWidgetItem *___qtablewidgetitem44 = construction_cost_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "Material", 0));
        QTableWidgetItem *___qtablewidgetitem45 = construction_cost_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "Land", 0));
        QTableWidgetItem *___qtablewidgetitem46 = construction_cost_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "Time", 0));

        const bool __sortingEnabled12 = construction_cost_tableWidget->isSortingEnabled();
        construction_cost_tableWidget->setSortingEnabled(false);
        construction_cost_tableWidget->setSortingEnabled(__sortingEnabled12);

        construction_quantity_label->setText(QApplication::translate("MainWindow", "Quantity", 0));
        build_commandLinkButton->setText(QApplication::translate("MainWindow", "Build", 0));
        cancel_construction_commandLinkButton->setText(QApplication::translate("MainWindow", "Cancel", 0));
        control_tabWidget->setTabText(control_tabWidget->indexOf(construction_tab), QApplication::translate("MainWindow", "Construct", 0));
        QTreeWidgetItem *___qtreewidgetitem = troops_research_treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Troop Upgrades", 0));

        const bool __sortingEnabled13 = troops_research_treeWidget->isSortingEnabled();
        troops_research_treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = troops_research_treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Worker", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Callouses", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = troops_research_treeWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Engineer", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Quickfix", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = troops_research_treeWidget->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Scout", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Bravery", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = troops_research_treeWidget->topLevelItem(3);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Medic", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Stem Cell Spray", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = troops_research_treeWidget->topLevelItem(4);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Soldier", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "Laser Sights", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = troops_research_treeWidget->topLevelItem(5);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "Sniper", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "Hawkeye", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = troops_research_treeWidget->topLevelItem(6);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "Commando", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "Lead Parachute", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = troops_research_treeWidget->topLevelItem(7);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "Grenadier", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem15->child(0);
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "Hot Potato", 0));
        troops_research_treeWidget->setSortingEnabled(__sortingEnabled13);

        research_tabWidget->setTabText(research_tabWidget->indexOf(troops_research_tab), QApplication::translate("MainWindow", "Troops", 0));
        QTreeWidgetItem *___qtreewidgetitem17 = vehicle_research_treeWidget->headerItem();
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "Vehicle Upgrades", 0));

        const bool __sortingEnabled14 = vehicle_research_treeWidget->isSortingEnabled();
        vehicle_research_treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem18 = vehicle_research_treeWidget->topLevelItem(0);
        ___qtreewidgetitem18->setText(0, QApplication::translate("MainWindow", "Humvee", 0));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem18->child(0);
        ___qtreewidgetitem19->setText(0, QApplication::translate("MainWindow", "Bulletproof Tires", 0));
        QTreeWidgetItem *___qtreewidgetitem20 = vehicle_research_treeWidget->topLevelItem(1);
        ___qtreewidgetitem20->setText(0, QApplication::translate("MainWindow", "Tank", 0));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(0, QApplication::translate("MainWindow", "Turret", 0));
        QTreeWidgetItem *___qtreewidgetitem22 = vehicle_research_treeWidget->topLevelItem(2);
        ___qtreewidgetitem22->setText(0, QApplication::translate("MainWindow", "Hovercraft", 0));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem22->child(0);
        ___qtreewidgetitem23->setText(0, QApplication::translate("MainWindow", "Bulletproof Bumpers", 0));
        QTreeWidgetItem *___qtreewidgetitem24 = vehicle_research_treeWidget->topLevelItem(3);
        ___qtreewidgetitem24->setText(0, QApplication::translate("MainWindow", "Helicopter", 0));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem24->child(0);
        ___qtreewidgetitem25->setText(0, QApplication::translate("MainWindow", "Stealth Blades", 0));
        QTreeWidgetItem *___qtreewidgetitem26 = vehicle_research_treeWidget->topLevelItem(4);
        ___qtreewidgetitem26->setText(0, QApplication::translate("MainWindow", "Fighter Jet", 0));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem26->child(0);
        ___qtreewidgetitem27->setText(0, QApplication::translate("MainWindow", "Heat-seeking Missles", 0));
        QTreeWidgetItem *___qtreewidgetitem28 = vehicle_research_treeWidget->topLevelItem(5);
        ___qtreewidgetitem28->setText(0, QApplication::translate("MainWindow", "Bomber", 0));
        QTreeWidgetItem *___qtreewidgetitem29 = ___qtreewidgetitem28->child(0);
        ___qtreewidgetitem29->setText(0, QApplication::translate("MainWindow", "Atomic Bomb", 0));
        QTreeWidgetItem *___qtreewidgetitem30 = vehicle_research_treeWidget->topLevelItem(6);
        ___qtreewidgetitem30->setText(0, QApplication::translate("MainWindow", "Cargo Plane", 0));
        QTreeWidgetItem *___qtreewidgetitem31 = ___qtreewidgetitem30->child(0);
        ___qtreewidgetitem31->setText(0, QApplication::translate("MainWindow", "Care Packages", 0));
        QTreeWidgetItem *___qtreewidgetitem32 = vehicle_research_treeWidget->topLevelItem(7);
        ___qtreewidgetitem32->setText(0, QApplication::translate("MainWindow", "Freighter", 0));
        QTreeWidgetItem *___qtreewidgetitem33 = ___qtreewidgetitem32->child(0);
        ___qtreewidgetitem33->setText(0, QApplication::translate("MainWindow", "Hording", 0));
        QTreeWidgetItem *___qtreewidgetitem34 = vehicle_research_treeWidget->topLevelItem(8);
        ___qtreewidgetitem34->setText(0, QApplication::translate("MainWindow", "Carrier", 0));
        QTreeWidgetItem *___qtreewidgetitem35 = ___qtreewidgetitem34->child(0);
        ___qtreewidgetitem35->setText(0, QApplication::translate("MainWindow", "Dual Runways", 0));
        QTreeWidgetItem *___qtreewidgetitem36 = vehicle_research_treeWidget->topLevelItem(9);
        ___qtreewidgetitem36->setText(0, QApplication::translate("MainWindow", "Battleship", 0));
        QTreeWidgetItem *___qtreewidgetitem37 = ___qtreewidgetitem36->child(0);
        ___qtreewidgetitem37->setText(0, QApplication::translate("MainWindow", "Radar", 0));
        QTreeWidgetItem *___qtreewidgetitem38 = vehicle_research_treeWidget->topLevelItem(10);
        ___qtreewidgetitem38->setText(0, QApplication::translate("MainWindow", "Destroyer", 0));
        QTreeWidgetItem *___qtreewidgetitem39 = ___qtreewidgetitem38->child(0);
        ___qtreewidgetitem39->setText(0, QApplication::translate("MainWindow", "Nuclear Missles", 0));
        QTreeWidgetItem *___qtreewidgetitem40 = vehicle_research_treeWidget->topLevelItem(11);
        ___qtreewidgetitem40->setText(0, QApplication::translate("MainWindow", "Submarine", 0));
        QTreeWidgetItem *___qtreewidgetitem41 = ___qtreewidgetitem40->child(0);
        ___qtreewidgetitem41->setText(0, QApplication::translate("MainWindow", "Torpedos", 0));
        vehicle_research_treeWidget->setSortingEnabled(__sortingEnabled14);

        research_tabWidget->setTabText(research_tabWidget->indexOf(vehicles_research_tab), QApplication::translate("MainWindow", "Vehicles", 0));
        QTreeWidgetItem *___qtreewidgetitem42 = building_research_treeWidget->headerItem();
        ___qtreewidgetitem42->setText(0, QApplication::translate("MainWindow", "Building Upgrades", 0));

        const bool __sortingEnabled15 = building_research_treeWidget->isSortingEnabled();
        building_research_treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem43 = building_research_treeWidget->topLevelItem(0);
        ___qtreewidgetitem43->setText(0, QApplication::translate("MainWindow", "Headquarters", 0));
        QTreeWidgetItem *___qtreewidgetitem44 = ___qtreewidgetitem43->child(0);
        ___qtreewidgetitem44->setText(0, QApplication::translate("MainWindow", "Move Underground", 0));
        QTreeWidgetItem *___qtreewidgetitem45 = building_research_treeWidget->topLevelItem(1);
        ___qtreewidgetitem45->setText(0, QApplication::translate("MainWindow", "Barracks", 0));
        QTreeWidgetItem *___qtreewidgetitem46 = ___qtreewidgetitem45->child(0);
        ___qtreewidgetitem46->setText(0, QApplication::translate("MainWindow", "Bunk Beds", 0));
        QTreeWidgetItem *___qtreewidgetitem47 = building_research_treeWidget->topLevelItem(2);
        ___qtreewidgetitem47->setText(0, QApplication::translate("MainWindow", "Commissary", 0));
        QTreeWidgetItem *___qtreewidgetitem48 = ___qtreewidgetitem47->child(0);
        ___qtreewidgetitem48->setText(0, QApplication::translate("MainWindow", "BOGO", 0));
        QTreeWidgetItem *___qtreewidgetitem49 = ___qtreewidgetitem47->child(1);
        ___qtreewidgetitem49->setText(0, QApplication::translate("MainWindow", "Quick Stock", 0));
        QTreeWidgetItem *___qtreewidgetitem50 = building_research_treeWidget->topLevelItem(3);
        ___qtreewidgetitem50->setText(0, QApplication::translate("MainWindow", "Mess Hall", 0));
        QTreeWidgetItem *___qtreewidgetitem51 = ___qtreewidgetitem50->child(0);
        ___qtreewidgetitem51->setText(0, QApplication::translate("MainWindow", "Sporks", 0));
        QTreeWidgetItem *___qtreewidgetitem52 = ___qtreewidgetitem50->child(1);
        ___qtreewidgetitem52->setText(0, QApplication::translate("MainWindow", "Large Tables", 0));
        QTreeWidgetItem *___qtreewidgetitem53 = building_research_treeWidget->topLevelItem(4);
        ___qtreewidgetitem53->setText(0, QApplication::translate("MainWindow", "Infirmary", 0));
        QTreeWidgetItem *___qtreewidgetitem54 = ___qtreewidgetitem53->child(0);
        ___qtreewidgetitem54->setText(0, QApplication::translate("MainWindow", "Co-ed Rooms", 0));
        QTreeWidgetItem *___qtreewidgetitem55 = ___qtreewidgetitem53->child(1);
        ___qtreewidgetitem55->setText(0, QApplication::translate("MainWindow", "Physical Therapy", 0));
        QTreeWidgetItem *___qtreewidgetitem56 = ___qtreewidgetitem53->child(2);
        ___qtreewidgetitem56->setText(0, QApplication::translate("MainWindow", "Rehabilitation", 0));
        QTreeWidgetItem *___qtreewidgetitem57 = building_research_treeWidget->topLevelItem(5);
        ___qtreewidgetitem57->setText(0, QApplication::translate("MainWindow", "Factory", 0));
        QTreeWidgetItem *___qtreewidgetitem58 = ___qtreewidgetitem57->child(0);
        ___qtreewidgetitem58->setText(0, QApplication::translate("MainWindow", "Automated Assistance", 0));
        QTreeWidgetItem *___qtreewidgetitem59 = ___qtreewidgetitem57->child(1);
        ___qtreewidgetitem59->setText(0, QApplication::translate("MainWindow", "Full Automation", 0));
        QTreeWidgetItem *___qtreewidgetitem60 = building_research_treeWidget->topLevelItem(6);
        ___qtreewidgetitem60->setText(0, QApplication::translate("MainWindow", "Research Facility", 0));
        QTreeWidgetItem *___qtreewidgetitem61 = ___qtreewidgetitem60->child(0);
        ___qtreewidgetitem61->setText(0, QApplication::translate("MainWindow", "Test Site", 0));
        QTreeWidgetItem *___qtreewidgetitem62 = ___qtreewidgetitem60->child(1);
        ___qtreewidgetitem62->setText(0, QApplication::translate("MainWindow", "Particle Accelerator", 0));
        QTreeWidgetItem *___qtreewidgetitem63 = building_research_treeWidget->topLevelItem(7);
        ___qtreewidgetitem63->setText(0, QApplication::translate("MainWindow", "Armory", 0));
        QTreeWidgetItem *___qtreewidgetitem64 = ___qtreewidgetitem63->child(0);
        ___qtreewidgetitem64->setText(0, QApplication::translate("MainWindow", "Improved Security", 0));
        QTreeWidgetItem *___qtreewidgetitem65 = building_research_treeWidget->topLevelItem(8);
        ___qtreewidgetitem65->setText(0, QApplication::translate("MainWindow", "Hangar", 0));
        QTreeWidgetItem *___qtreewidgetitem66 = ___qtreewidgetitem65->child(0);
        ___qtreewidgetitem66->setText(0, QApplication::translate("MainWindow", "Increase Capacity", 0));
        QTreeWidgetItem *___qtreewidgetitem67 = building_research_treeWidget->topLevelItem(9);
        ___qtreewidgetitem67->setText(0, QApplication::translate("MainWindow", "Gas Station", 0));
        QTreeWidgetItem *___qtreewidgetitem68 = ___qtreewidgetitem67->child(0);
        ___qtreewidgetitem68->setText(0, QApplication::translate("MainWindow", "Dual Pumps", 0));
        QTreeWidgetItem *___qtreewidgetitem69 = ___qtreewidgetitem67->child(1);
        ___qtreewidgetitem69->setText(0, QApplication::translate("MainWindow", "Triple Pumps", 0));
        QTreeWidgetItem *___qtreewidgetitem70 = ___qtreewidgetitem67->child(2);
        ___qtreewidgetitem70->setText(0, QApplication::translate("MainWindow", "Quadruple Pumps", 0));
        QTreeWidgetItem *___qtreewidgetitem71 = building_research_treeWidget->topLevelItem(10);
        ___qtreewidgetitem71->setText(0, QApplication::translate("MainWindow", "Water Tower", 0));
        QTreeWidgetItem *___qtreewidgetitem72 = ___qtreewidgetitem71->child(0);
        ___qtreewidgetitem72->setText(0, QApplication::translate("MainWindow", "Increase Capacity", 0));
        QTreeWidgetItem *___qtreewidgetitem73 = ___qtreewidgetitem71->child(1);
        ___qtreewidgetitem73->setText(0, QApplication::translate("MainWindow", "Raise", 0));
        QTreeWidgetItem *___qtreewidgetitem74 = building_research_treeWidget->topLevelItem(11);
        ___qtreewidgetitem74->setText(0, QApplication::translate("MainWindow", "Power Plant", 0));
        QTreeWidgetItem *___qtreewidgetitem75 = ___qtreewidgetitem74->child(0);
        ___qtreewidgetitem75->setText(0, QApplication::translate("MainWindow", "Backup Generators", 0));
        QTreeWidgetItem *___qtreewidgetitem76 = ___qtreewidgetitem74->child(1);
        ___qtreewidgetitem76->setText(0, QApplication::translate("MainWindow", "Improved Transformers", 0));
        building_research_treeWidget->setSortingEnabled(__sortingEnabled15);

        research_tabWidget->setTabText(research_tabWidget->indexOf(buildings_research_tab), QApplication::translate("MainWindow", "Buildings", 0));
        research_tabWidget->setTabText(research_tabWidget->indexOf(in_progress_research_tab), QApplication::translate("MainWindow", "In Progress", 0));
        research_commandLinkButton->setText(QApplication::translate("MainWindow", "Research", 0));
        cancel_research_commandLinkButton->setText(QApplication::translate("MainWindow", "Cancel", 0));
        research_progress_label->setText(QApplication::translate("MainWindow", "Progress", 0));
        research_description_label->setText(QApplication::translate("MainWindow", "Description", 0));
        research_cost_label->setText(QApplication::translate("MainWindow", "Cost", 0));
        QTableWidgetItem *___qtablewidgetitem47 = research_cost_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "Fuel", 0));
        QTableWidgetItem *___qtablewidgetitem48 = research_cost_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "Power", 0));
        QTableWidgetItem *___qtablewidgetitem49 = research_cost_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "Material", 0));
        QTableWidgetItem *___qtablewidgetitem50 = research_cost_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "Time", 0));

        const bool __sortingEnabled16 = research_cost_tableWidget->isSortingEnabled();
        research_cost_tableWidget->setSortingEnabled(false);
        research_cost_tableWidget->setSortingEnabled(__sortingEnabled16);

        control_tabWidget->setTabText(control_tabWidget->indexOf(research_tab), QApplication::translate("MainWindow", "Research", 0));
        notifications_label->setText(QApplication::translate("MainWindow", "Notifications", 0));
        dismiss_notification_pushButton->setText(QApplication::translate("MainWindow", "Dismiss", 0));
        dismiss_all_notifications_pushButton->setText(QApplication::translate("MainWindow", "Dismiss All", 0));
        minimap_label->setText(QApplication::translate("MainWindow", "Minimap", 0));
        clockLabel->setText(QApplication::translate("MainWindow", "Time", 0));
        resources_label->setText(QApplication::translate("MainWindow", "Resources", 0));
        QTableWidgetItem *___qtablewidgetitem51 = resourceTable->horizontalHeaderItem(0);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "Food", 0));
        QTableWidgetItem *___qtablewidgetitem52 = resourceTable->horizontalHeaderItem(1);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "Water", 0));
        QTableWidgetItem *___qtablewidgetitem53 = resourceTable->horizontalHeaderItem(2);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "Fuel", 0));
        QTableWidgetItem *___qtablewidgetitem54 = resourceTable->horizontalHeaderItem(3);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "Power", 0));
        QTableWidgetItem *___qtablewidgetitem55 = resourceTable->horizontalHeaderItem(4);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "Materials", 0));
        QTableWidgetItem *___qtablewidgetitem56 = resourceTable->horizontalHeaderItem(5);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "Land", 0));

        const bool __sortingEnabled17 = resourceTable->isSortingEnabled();
        resourceTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem57 = resourceTable->item(0, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem58 = resourceTable->item(0, 1);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem59 = resourceTable->item(0, 2);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem60 = resourceTable->item(0, 3);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem61 = resourceTable->item(0, 4);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "0", 0));
        QTableWidgetItem *___qtablewidgetitem62 = resourceTable->item(0, 5);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "0", 0));
        resourceTable->setSortingEnabled(__sortingEnabled17);

#ifndef QT_NO_ACCESSIBILITY
        resourceTable->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        menuGame->setTitle(QApplication::translate("MainWindow", "Game", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
        menuNotifications_2->setTitle(QApplication::translate("MainWindow", "Notifications", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
