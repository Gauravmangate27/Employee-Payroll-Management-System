#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget> // To display employees
#include <QPushButton> // For the "Add" button

// We forward-declare the Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    // This macro is required for any class that defines its own signals or slots
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    // This function will be called when the "Add Employee" button is clicked
    void on_addEmployeeButton_clicked();

    // This function can be called from your dialog to refresh the list
    void refreshEmployeeList();

private:
    Ui::MainWindow *ui; // This holds all the UI elements from the .ui file
    
    // We can store employees in a simple QList or QVector
    // QList<Employee> employeeList; 
    // For this example, we'll just add to the UI list directly
};

#endif // MAINWINDOW_H
