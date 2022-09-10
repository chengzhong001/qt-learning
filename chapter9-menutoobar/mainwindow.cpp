#include "mainwindow.h"
// #include <QMenu>
// #include <QMenuBar>
#include <QApplication>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    
    auto *menuBar = new QMenuBar();
    QMenu *file = menuBar->addMenu("&File");

    auto *quit = new QAction("&Text", this);
    file->addAction(quit);


    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}

MainWindow::~MainWindow()
{
}
