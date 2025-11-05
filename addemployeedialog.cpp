#include "addemployeedialog.h"
#include "ui_addemployeedialog.h"
#include <QDebug> // For printing to the console

AddEmployeeDialog::AddEmployeeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEmployeeDialog)
{
    ui->setupUi(this);
}

AddEmployeeDialog::~AddEmployeeDialog()
{
    delete ui;
}

// This slot runs when the user clicks the "OK" button
void AddEmployeeDialog::on_buttonBox_accepted()
{
    // Get the text from the QLineEdit widgets in the UI
    // (Assuming their objectName is "nameLineEdit", "idLineEdit", etc.)
    QString name = ui->nameLineEdit->text();
    int id = ui->idLineEdit->text().toInt();
    double rate = ui->rateLineEdit->text().toDouble();
    
    // --- In a real app, you would save this data ---
    // For example, append to a CSV file or insert into an SQL database.
    
    qDebug() << "New Employee Added:";
    qDebug() << "ID:" << id;
    qDebug() << "Name:" << name;
    qDebug() << "Rate:" << rate;
    
    // The 'accept()' signal is emitted automatically, 
    // which closes the dialog and returns QDialog::Accepted.
}
