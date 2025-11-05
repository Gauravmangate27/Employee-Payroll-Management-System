# Employee Payroll Management System (C++ & Qt)

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++"/>
  <img src="https://img.shields.io/badge/Qt-41CD52?style=for-the-badge&logo=qt&logoColor=white" alt="Qt"/>
</p>

A desktop application built with **C++** and the **Qt framework** to manage employee records and calculate payroll. This project provides a clean graphical user interface (GUI) for adding employees, viewing all records, and running payroll calculations.

***

## 📸 Screenshots

*(Add screenshots of your application here. This is crucial for a GUI project.)*

| Main Window | Add Employee Dialog |
| :---: | :---: |
|  |  |

***

## ✨ Key Features

* **GUI Interface:** A user-friendly desktop application built with Qt Widgets.
* **Add Employees:** A simple dialog form to add new employees with their ID, name, and hourly rate.
* **View All Employees:** Displays a list of all employees currently in the system.
* **Run Payroll:** A dedicated function to select an employee, enter their hours worked, and calculate their total pay.
* **Cross-Platform:** Can be compiled and run on Windows, macOS, and Linux.

***

## 🛠️ Tech Stack

* **Core Logic:** C++
* **GUI Framework:** [Qt Framework](https://www.qt.io/)
    * **Qt Modules:** `QtWidgets`, `QtCore`, `QtGui`
* **IDE:** [Qt Creator](https://www.qt.io/product/development-tools) (Recommended)

***

## 🚀 Getting Started

Follow these instructions to get a local copy up and running.

### Prerequisites

You will need the **Qt SDK** and **Qt Creator** installed on your system.
* [Download the Qt Online Installer](https://www.qt.io/download-open-source) (Select the `Qt 6` or `Qt 5` and `Qt Creator` components)
* A C++ compiler (MSVC on Windows, GCC on Linux, Clang on macOS - usually included with Qt's installer).

### Building and Running

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YOUR_USERNAME/Employee-Payroll-Management-System.git](https://github.com/YOUR_USERNAME/Employee-Payroll-Management-System.git)
    cd Employee-Payroll-Management-System
    ```

2.  **Open in Qt Creator:**
    * Launch Qt Creator.
    * Go to **File** -> **Open File or Project...**
    * Select the `.pro` file (e.g., `PayrollSystem.pro`) from the cloned directory.
    * When prompted, **Configure** the project for your installed Qt kit (e.g., `Desktop Qt 6.5.0`).

3.  **Build and Run:**
    * Click the **Build** button (or `Ctrl+B`).
    * Click the **Run** button (the green play icon or `Ctrl+R`).
    * The application window should now appear.

***

## 📂 Project Structure

A brief overview of the key files in this project:

* **`PayrollSystem.pro`:** The Qt project file. It defines the project's modules, source files, and header files.
* **`main.cpp`:** The main entry point for the application. It creates and displays the `MainWindow`.
* **`mainwindow.h` / `mainwindow.cpp`:** The header and source files for the main application window. It handles displaying the employee list and connecting the buttons.
* **`addemployeedialog.h` / `addemployeedialog.cpp`:** The header and source files for the popup dialog used to add a new employee.

***

## 🤝 Contributing

Contributions are always welcome!

1.  Fork the Project
2.  Create your Feature Branch (`git checkout -b feature/NewFeature`)
3.  Commit your Changes (`git commit -m 'Add some NewFeature'`)
4.  Push to the Branch (`git push origin feature/NewFeature`)
5.  Open a Pull Request

***

## 📄 License

This project is licensed under the MIT License. See the `LICENSE` file for details.
