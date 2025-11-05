#include "mainwindow.h" // Your main window
#include <QApplication>  // The core Qt application class

int main(int argc, char *argv[])
{
    // QApplication manages all the GUI application-wide resources
    QApplication a(argc, argv);
    
    // Create an instance of your main window
    MainWindow w;
    
    // Show the window
    w.show();
    
    // Start the application's event loop (waits for user input)
    return a.exec();
}
