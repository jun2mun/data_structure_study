#include "UserSearchRun.h"
#include "ui_UserSearchRun.h"
#include "SongInfo.h"

UserSearchRun::UserSearchRun(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::UserSearchRun)
{
	ui->setupUi(this);
}

UserSearchRun::~UserSearchRun()
{
	delete ui;
}

void UserSearchRun::on_SearchById_BinaryS_clicked()
{
	ui->Default_label->setText("success");
}
void UserSearchRun::on_SearchByArtist_clicked()
{
	ui->Default_label->setText("success");
}

void UserSearchRun::on_SearchByGenre_clicked()
{
	ui->Default_label->setText("success");
}

void UserSearchRun::on_UserSearchRun_quit_clicked()
{
	this->hide();
	SongInfo *songinfo;
	songinfo = new SongInfo();
	songinfo->show();
}
