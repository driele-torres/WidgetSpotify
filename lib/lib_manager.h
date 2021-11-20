#ifndef LIB_MANAGER_H
#define LIB_MANAGER_H

#include <QObject>

#include "db_manager.h"
#include "db_table.h"
#include "db_field.h"

namespace lib {

class Manager: public db::Manager
{
    Q_OBJECT
public:
    static db::Manager& instance();
protected:
    QList<db::Table*> tables();
    virtual void preSetup(const QString&path);
private:
    explicit Manager(QObject *parent = nullptr): db::Manager(parent){}
    ~Manager(){}

};
}

#endif // LIB_MANAGER_H
