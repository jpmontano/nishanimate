#include "mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent )
{
    myMenuBar = new QMenuBar( this );
    setGeometry( 0, 0, 900, 600 );

    showMenuBar();

}

void MainWindow::showMenuBar()
{

    myMenuBar->clear();
    myMenuBar->setNativeMenuBar( true );

    // Menus
    QMenu *fileMenu = new QMenu( tr("&File") );
    myMenuBar->addAction( fileMenu->menuAction() );
    //
    QMenu *editMenu = new QMenu( tr("&Edit") );
    myMenuBar->addAction( editMenu->menuAction() );
    //
    QMenu *helpMenu = new QMenu( tr("&Help") );
    myMenuBar->addAction( helpMenu->menuAction() );

    // Actions
    newAct = new QAction( tr("New"), this );
    newAct->setShortcuts( QKeySequence::New );
    connect( newAct, SIGNAL(triggered()), this, SLOT(newActSlot()) );
    openAct = new QAction( tr("Open"), this );
    openAct->setShortcuts( QKeySequence::Open );
    connect( openAct, SIGNAL(triggered()), this, SLOT(openActSlot()) );
    undoAct = new QAction( tr("Undo"), this );
    undoAct->setShortcuts( QKeySequence::Undo );
    connect( undoAct, SIGNAL(triggered()), this, SLOT(undoActSlot()) );
    redoAct = new QAction( tr("Redo"), this );
    redoAct->setShortcuts( QKeySequence::Redo );
    connect( redoAct, SIGNAL(triggered()), this, SLOT(redoActSlot()) );
    copyAct = new QAction( tr("Copy"), this );
    copyAct->setShortcuts( QKeySequence::Copy );
    connect( copyAct, SIGNAL(triggered()), this, SLOT(copyActSlot()) );
    aboutAct = new QAction( tr("About"), this );
    connect( aboutAct, SIGNAL(triggered()), this, SLOT(aboutActSlot()) );
    tutorialsAct = new QAction( tr("Tutorials"), this );
    connect( tutorialsAct, SIGNAL(triggered()), this, SLOT(tutorialsActSlot()) );


    // Add actions to their respective menus
    fileMenu->addAction( newAct );
    fileMenu->addSeparator();
    fileMenu->addAction( openAct );
    //
    editMenu->addAction( undoAct );
    editMenu->addAction( redoAct );
    editMenu->addSeparator();
    editMenu->addAction( copyAct );
    //
    helpMenu->addAction( aboutAct );
    helpMenu->addAction( tutorialsAct );

}


void MainWindow::newActSlot()
{
    QMessageBox::about( this, tr("New"), tr("Mii sa we New gaa-zhinkaadeg.") );
}


void MainWindow::openActSlot()
{
    QMessageBox::about( this, tr("Open"), tr("Open gegoon") );
}


void MainWindow::undoActSlot()
{
    QMessageBox::about( this, tr("Undo"), tr("Undo gegoon") );
}


void MainWindow::redoActSlot()
{
    QMessageBox::about( this, tr("Redo"), tr("Redo gegoon") );
}


void MainWindow::copyActSlot()
{
    QMessageBox::about( this, tr("Copy"), tr("Copy gegoon") );
}


void MainWindow::aboutActSlot()
{
    QMessageBox::about( this, tr("About"), tr("About gegoon") );
}


void MainWindow::tutorialsActSlot()
{
    QMessageBox::about( this, tr("Tutorials"), tr("Tutorials gegoon") );
}



