#pragma once

#include <QtWidgets/qmainwindow.h>
#include "qstring.h"
#include "SongInfo.h"
#include "Info_Modified.h"

namespace Ui {
	class MainWindow;
}
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();

private slots:
	void on_login_label_clicked();
	void on_signup_label_clicked();
	void on_admin_label_clicked();
private:
	Ui::MainWindow *ui;
	SongInfo *songinfo;
	Info_Modified *info_modified;
	QString input_username, input_password, username, password;
	bool account;

};
