#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lastriddle.h"
#include "gameend.h"
#include "ZorkUL.h"
#include "item.h"
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
    //void on_teleButton_clicked();

    //void on_startButton_clicked();

   // void on_mapButton_clicked();

    //void on_testButton_clicked();

    void on_goButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_SearchButton_clicked();

    void on_item1_clicked();

    void on_item2_clicked();

    void on_item3_clicked();

    void on_item4_clicked();

    void on_item5_clicked();

    void on_item6_clicked();

    void on_item7_clicked();

    void on_item8_clicked();

    void on_item9_clicked();

private:
    Ui::MainWindow *ui;
    LastRiddle *lastRiddle = NULL;
    GameEnd *gameEnd = NULL;
    ZorkUL *zork;
    int inventoryItemCounter;
    vector<Item*> inventoryItems;
    QString answer;

    void check_exit_rooms();
    void displayCurrentRoomInfo();
    void displayExitList();
    void clearExitList();
    void floorMoveAllowed();
    void on_unlocked_Door(QString, int);
    void displayLastRiddle();

    void inventoryDisplay();
    void displayItemContents();
    void addItemToInventoryGUI(Item*);
    void insertToGUI(notes*);
    void insertToGUI(keys*);
};

#endif // MAINWINDOW_H
