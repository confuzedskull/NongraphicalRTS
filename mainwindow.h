#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_troop_construction_listWidget_currentRowChanged(int currentRow);

    void on_control_tabWidget_currentChanged(int index);

    void on_vehicle_construction_listWidget_currentRowChanged(int currentRow);

    void on_building_construction_listWidget_currentRowChanged(int currentRow);

    void on_construction_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
