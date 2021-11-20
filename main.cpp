#include <QApplication>
#include "lib_requests.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lib::Requests::instance().categories();
    return a.exec();
}

//#include "basewindow.h"
//BaseWindow w;
//w.show();
