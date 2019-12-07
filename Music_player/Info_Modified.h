#pragma once
#include <QtWidgets/qdialog.h>
#include "qdialog.h"
#include "qstring.h"
#include "DisplayAllMusic.h"

namespace Ui {
	class Info_Modified;
}
class Info_Modified : public QDialog
{
	Q_OBJECT

public:
	explicit Info_Modified(QWidget *parent = Q_NULLPTR);
	~Info_Modified();

private slots:
	void on_AddMusic_clicked();
	void on_DeleteMusic_clicked();
	void on_ReplaceMusic_clicked();
	void on_SearchTypeRun_clicked();
	void on_DisplayAllMusic_clicked();
	void on_MakeEmpty_clicked();
	void on_Info_Modified_quit_clicked();
private:
	Ui::Info_Modified *ui;
};
