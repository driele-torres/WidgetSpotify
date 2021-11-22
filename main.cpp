#include <QApplication>
#include "basewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BaseWindow w(nullptr);
    w.show();
    return a.exec();
}
