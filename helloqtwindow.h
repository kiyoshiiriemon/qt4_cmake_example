#pragma once
#include <QMainWindow>
#include "ui_helloqtwindow.h"

class HelloQtWindow : public QMainWindow
{
Q_OBJECT
public:
	HelloQtWindow(QWidget *parent = 0, Qt::WindowFlags = 0);
	~HelloQtWindow();
public slots:
	void onButtonPushed();
private:
	void connectSignals();
	Ui::HelloMainWindow ui;
};

