#include "mainwindow.h"

#include <QApplication>
#include <QtCore>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVector<int> vec = {1,2} ;
    QList<char> list = {'a','b','c'};
    QCheckBox checkbox ;
    QComboBox combobox;

    MainWindow w;
    w.show();
    return a.exec();
}
