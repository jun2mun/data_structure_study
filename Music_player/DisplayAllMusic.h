#pragma once
#include <QtWidgets/qdialog.h>
#include "qdialog.h"
#include "qstring.h"

namespace Ui {
	class DisplayAllMusic;
}
class DisplayAllMusic : public QDialog
{
	Q_OBJECT

public:
	explicit DisplayAllMusic(QWidget *parent = Q_NULLPTR);
	~DisplayAllMusic();

private slots:
	void on_DisplayAllMusic_quit_clicked();
private:
	Ui::DisplayAllMusic *ui;
};
