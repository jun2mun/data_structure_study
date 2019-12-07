#include "main_window.h"
#include "ui_main_window.h"
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

}
MainWindow::~MainWindow()
{
	delete ui;
}
void MainWindow::on_signup_label_clicked()
{
	if (account) {
		username = ui->lineEdit_username->text();
		password = ui->lineEdit_password->text();
		ui->label->setText("sign up complete");
		account = false;
	}
}
void MainWindow::on_admin_label_clicked()
{
	this->hide();
	Info_Modified *info_modified;
	info_modified = new Info_Modified;
	info_modified->exec();
}
void MainWindow::on_login_label_clicked()
{
	input_username = ui->lineEdit_username->text();
	input_password = ui->lineEdit_password->text();


	if (username == input_username && password == input_password) {
		ui->label->setText("username and password is correct");
		this->hide();
		songinfo = new SongInfo;
		songinfo->exec();
	}
	
	else
		ui->label->setText("username and password is not correct");
	
}