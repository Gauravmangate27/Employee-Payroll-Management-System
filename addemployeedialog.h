#ifndef ADDEMPLOYEEDIALOG_H
#define ADDEMPLOYEEDIALOG_H

#include <QDialog>

namespace Ui {
class AddEmployeeDialog;
}

class AddEmployeeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddEmployeeDialog(QWidget *parent = 0);
    ~AddEmployeeDialog();

private slots:
    // This slot is called when the user clicks the "OK" button
    void on_buttonBox_accepted();

private:
    Ui::AddEmployeeDialog *ui; // Holds the UI for the dialog
};

#endif // ADDEMPLOYEEDIALOG_H
