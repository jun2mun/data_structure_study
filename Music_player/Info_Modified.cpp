#include "Info_Modified.h"
#include "ui_Info_Modified.h"
#include "Application.h"

Info_Modified::Info_Modified(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::Info_Modified)
{
	ui->setupUi(this);
}

Info_Modified::~Info_Modified()
{
	delete ui;
}

void Info_Modified::on_AddMusic_clicked()
{
	Application app;
	app.AddMusic();
}

void Info_Modified::on_DeleteMusic_clicked()
{
	Application app;
	app.DeleteMusic();
}

void Info_Modified::on_ReplaceMusic_clicked()
{
	Application app;
	app.ReplaceMusic();
}

void Info_Modified::on_SearchTypeRun_clicked()
{
	Application app;
	app.SearchTypeRun();
}

void Info_Modified::on_DisplayAllMusic_clicked()
{
	Application app;
	app.DisplayAllMusic();
}

void Info_Modified::on_MakeEmpty_clicked()
{
	Application app;
	app.MakeEmpty();
}

void Info_Modified::on_Info_Modified_quit_clicked()
{
	this->close();
}
