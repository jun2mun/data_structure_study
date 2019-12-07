#pragma once
#include <QtWidgets/qdialog.h>
#include "qstring.h"
#include "qdialog.h"

namespace Ui {
	class PlaylistRun;
}
class PlaylistRun : public QDialog
{
	Q_OBJECT

public:
	explicit PlaylistRun(QWidget *parent = Q_NULLPTR);
	~PlaylistRun();

private slots:
	void on_AddToPlayList_clicked();
	void on_PlayIOAddTime_clicked();
	void on_PlayIOFreq_clicked();
	void on_DeleteFrPlayList_clicked();
	void on_PlaylistRun_quit_clicked();

private:
	Ui::PlaylistRun *ui;

};
