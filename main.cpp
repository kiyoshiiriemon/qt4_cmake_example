#include "helloqtwindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HelloQtWindow w;
	w.show();
	return a.exec();
}

