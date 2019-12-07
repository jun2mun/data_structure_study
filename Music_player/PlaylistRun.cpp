#include "PlaylistRun.h"
#include "ui_PlaylistRun.h"
#include "SongInfo.h"

PlaylistRun::PlaylistRun(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::PlaylistRun)
{
	ui->setupUi(this);
}

PlaylistRun::~PlaylistRun()
{
	delete ui;
}

void PlaylistRun::on_AddToPlayList_clicked()
{

}
void PlaylistRun::on_PlayIOAddTime_clicked()
{
}

void PlaylistRun::on_PlayIOFreq_clicked()
{
}

void PlaylistRun::on_DeleteFrPlayList_clicked()
{
}

void PlaylistRun::on_PlaylistRun_quit_clicked()
{
	this->hide();
	SongInfo *songinfo;
	songinfo->show();
}
