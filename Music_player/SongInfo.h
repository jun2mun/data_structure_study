#pragma once
#include <QtWidgets/qdialog.h>
#include "qdialog.h"
#include "qstring.h"
#include "PlaylistRun.h"
#include "UserSearchRun.h"
#include  "DisplayAllMusic.h"

namespace Ui {
	class SongInfo;
}
class SongInfo : public QDialog
{
	Q_OBJECT

public:
	explicit SongInfo(QWidget *parent = Q_NULLPTR);
	~SongInfo();

private slots:
	void on_UserSearchTypeRun_clicked();
	void on_DisplayAllMusic_clicked();
	void on_PlaylistRun_clicked();
	void on_WriteUserDataToFile_clicked();
	void on_main_quit_clicked();

private:
	Ui::SongInfo *ui;
	PlaylistRun *playlistrun;
	UserSearchRun *usersearchrun;
	DisplayAllMusic *displayallmusic;
};
