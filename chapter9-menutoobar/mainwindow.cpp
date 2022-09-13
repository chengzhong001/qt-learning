#include "mainwindow.h"
// #include <QMenu>
// #include <QMenuBar>
#include <QApplication>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    // auto *menuBar = new QMenuBar();
    // QMenu *file = menuBar->addMenu("&File");
    // auto *quit = new QAction("&Text", this);
    // file->addAction(quit);

    // connect(quit, &QAction::triggered, qApp, QApplication::quit);

    QPixmap newpix("/Users/azhong/Documents/Project/qt-learning/chapter9-menutoobar/images/new.png");
    QPixmap openix("/Users/azhong/Documents/Project/qt-learning/chapter9-menutoobar/images/open.png");
    QPixmap quitpix("/Users/azhong/Documents/Project/qt-learning/chapter9-menutoobar/images/quit.png");
    QPixmap showpix("/Users/azhong/Documents/Project/qt-learning/chapter9-menutoobar/images/show.png");

    auto *newa = new QAction(newpix, "&新建", this);
    auto *open = new QAction(openix, "&打开", this);
    auto *quit = new QAction(quitpix, "&退出", this);

    quit->setShortcut(tr("CTRL+B"));

    auto menuBar = new QMenuBar();
    QMenu *file = menuBar->addMenu("&文件");

    status = new QAction(showpix, "&显示状态栏", this);
    status->setCheckable(true);
    status->setChecked(true);

    file->addAction(newa);
    file->addAction(open);
    file->addSeparator();
    file->addAction(quit);
    file->addAction(status);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);

    statusBar();
    status->setStatusTip("状态栏");
    connect(status, &QAction::triggered, this, &MainWindow::toggleStatusbar);
}

MainWindow::~MainWindow()
{
}

void MainWindow::toggleStatusbar()
{
    if(status->isChecked())
        statusBar()->show();
    else
        statusBar()->hide();
    
}