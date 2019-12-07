#include "main_window.h"
#include <QtWidgets/QApplication>
#include "Application.h"
#include "Base.h"

/* #include "Application.h" */


int main(int argc, char *argv[])
{
	Application app;	// Application class object that controls the application
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
/*
int main()
{
	static HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.dwSize = 1;
	ConsoleCursor.bVisible = false;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);

	Application app;	// Application class object that controls the application
	app.HomeRun();			// initiate the application

	return 0;
}
*/