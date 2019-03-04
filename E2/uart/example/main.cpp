#include "mainwindow.h"
#include <QApplication>
#include <qDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setApplicationName(QApplication::tr("Camera UART Controller"));

    MainWindow w;
    w.show();

    return a.exec();
}
