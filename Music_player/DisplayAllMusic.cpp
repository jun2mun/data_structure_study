#include "DisplayAllMusic.h"
#include "ui_DisplayAllMusic.h"
#include "Application.h"
#include "qstring.h"
#include "SongInfo.h"

DisplayAllMusic::DisplayAllMusic(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::DisplayAllMusic)
{
	ui->setupUi(this);
}

DisplayAllMusic::~DisplayAllMusic()
{
	delete ui;
}

void DisplayAllMusic::on_DisplayAllMusic_quit_clicked()
{
	this->hide();
	SongInfo *songinfo;
	songinfo = new SongInfo();
	songinfo->show();
}