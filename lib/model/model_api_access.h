#ifndef MODEL_API_ACCESS_H
#define MODEL_API_ACCESS_H

#include <QObject>
#include <QDateTime>

#include "db_macros.h"
#include "db_table.h"

namespace model {

class ApiAccess : public QObject
{
    Q_OBJECT
public:
    PK_FIELD(id)

    TABLE_NAME(apiAccess)

//    TABLE_FIELD(id   , db::Field::INTEGER , true  , true  )
//    TABLE_FIELD(dt   , db::Field::DATETIME, false , false )
//    TABLE_FIELD(ativo, db::Field::BOOL    , false , false )

    Q_PROPERTY( long long id    READ id    WRITE setId    )
    Q_PROPERTY( bool      ativo READ ativo WRITE setAtivo )
    Q_PROPERTY( QDateTime dt    READ dt    WRITE setDt    )

    Q_INVOKABLE explicit ApiAccess(QObject *parent = nullptr):QObject(parent){}
    ~ApiAccess(){}

    long long id() const;
    void setId(long long id);

    bool ativo() const;
    void setAtivo(bool ativo);

    QDateTime dt() const;
    void setDt(const QDateTime &dt);

private:
    long long _id   =0;
    bool      _ativo=true;
    QDateTime _dt;
};
}
#endif // MODEL_API_ACCESS_H
