#include "mainwindow.h"
#include "ui_mainwindow.h"   // This is the UI form created with the designer
#include "addemployeedialog.h" // Include your popup dialog
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) // Initialize the UI
{
    // This connects the UI file's elements to the 'ui' variable
    ui->setupUi(this); 
    
    // --- Manually connecting a button (if not using the auto-connect slot) ---
    // connect(ui->addEmployeeButton, &QPushButton::clicked, 
    //         this, &MainWindow::on_addEmployeeButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// This is the SLOT that runs when 'addEmployeeButton' is clicked
// Qt's "signals and slots" system connects them automatically by name.
void MainWindow::on_addEmployeeButton_clicked()
{
    // Create an instance of your "Add Employee" dialog
    AddEmployeeDialog dialog(this);
    
    // Show the dialog as a modal popup. The code will PAUSE here
    // until the user clicks "OK" or "Cancel".
    if (dialog.exec() == QDialog::Accepted) {
        // If the user clicked "OK", get the data and update the list
        refreshEmployeeList();
    }
}

void MainWindow::refreshEmployeeList()
{
    // In a real app, you would read from your vector or database.
    // For this example, we'll just add a placeholder.
    
    // Clear the old list
    ui->employeeListWidget->clear(); 

    // Add new items
    ui->employeeListWidget->addItem(new QListWidgetItem("ID: 101, Name: John Doe, Rate: $25.00"));
    ui->employeeListWidget->addItem(new QListWidgetItem("ID: 102, Name: Jane Smith, Rate: $30.00"));
    // ... add other employees from your data source ...
}
