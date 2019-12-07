#pragma once
#include <QtWidgets/qdialog.h>
#include "qstring.h"
#include "qdialog.h"


namespace Ui {
	class UserSearchRun;
}
class UserSearchRun : public QDialog
{
	Q_OBJECT

public:
	explicit UserSearchRun(QWidget *parent = Q_NULLPTR);
	~UserSearchRun();

private slots:
	void on_SearchById_BinaryS_clicked();
	void on_SearchByArtist_clicked();
	void on_SearchByGenre_clicked();
	void on_UserSearchRun_quit_clicked();


private:
	Ui::UserSearchRun *ui;
};
