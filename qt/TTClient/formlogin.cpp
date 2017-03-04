#include "formlogin.h"
#include "ui_formlogin.h"

FormLogin::FormLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLogin)
{
    ui->setupUi(this);
}

FormLogin::~FormLogin()
{
    delete ui;
}
