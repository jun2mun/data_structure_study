#include "SongInfo.h"
#include "ui_SongInfo.h"
#include "Application.h"

SongInfo::SongInfo(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::SongInfo)
{
	ui->setupUi(this);
}

SongInfo::~SongInfo()
{
	delete ui;
}

void SongInfo::on_UserSearchTypeRun_clicked()
{
	this->hide();
	usersearchrun = new UserSearchRun();
	usersearchrun->show();
}
void SongInfo::on_PlaylistRun_clicked()
{
	this->hide();
	playlistrun = new PlaylistRun();
	playlistrun->show();
}

void SongInfo::on_DisplayAllMusic_clicked()
{
	this->hide();
	displayallmusic = new DisplayAllMusic();
	displayallmusic->show();
}

void SongInfo::on_WriteUserDataToFile_clicked()
{
	this->hide();
	Application app;
	app.WriteUserDataToFile();
}

void SongInfo::on_main_quit_clicked()
{
	this->hide();
}
