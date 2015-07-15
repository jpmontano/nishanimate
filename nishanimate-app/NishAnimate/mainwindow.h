#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( QWidget *parent = 0 );

private slots:
    void showMenuBar();
    void newActSlot();
    void openActSlot();
    void undoActSlot();
    void redoActSlot();
    void copyActSlot();
    void aboutActSlot();
    void tutorialsActSlot();

private:
    QMenuBar *myMenuBar;
    QAction *newAct;
    QAction *openAct;
    QAction *undoAct;
    QAction *redoAct;
    QAction *copyAct;
    QAction *aboutAct;
    QAction *tutorialsAct;

};

#endif // MAINWINDOW_H
