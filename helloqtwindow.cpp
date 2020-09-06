#include "helloqtwindow.h"

HelloQtWindow::HelloQtWindow(QWidget *, Qt::WindowFlags)
{
	ui.setupUi(this);
	connectSignals();
}

HelloQtWindow::~HelloQtWindow()
{
}

void
HelloQtWindow::connectSignals()
{
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onButtonPushed()));
}

void
HelloQtWindow::onButtonPushed()
{
	ui.label->setText("Hello!");
}

