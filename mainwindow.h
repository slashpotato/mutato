#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "toolbar.h"

#include <QWidget>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    ToolBar *toolBar;
    QWidget *centralWidget;
    QHBoxLayout *hlayout;

};

#endif // MAINWINDOW_H