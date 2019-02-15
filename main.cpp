#include <QApplication>
#include <QMainWindow>
#include "myMainWindow.h"

int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    myMainWindow window;

    window.setWindowTitle(QString::fromUtf8("MainWindow"));
    window.resize(450,300);
    window.Execute();

    return app.exec();
}
