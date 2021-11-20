#include "model_api_access.h"

namespace model {

long long ApiAccess::id() const
{
    return _id;
}

void ApiAccess::setId(long long id)
{
    _id = id;
}
QDateTime ApiAccess::dt() const
{
    return _dt;
}

void ApiAccess::setDt(const QDateTime &dt)
{
    _dt = dt;
}

bool ApiAccess::ativo() const
{
    return _ativo;
}

void ApiAccess::setAtivo(bool ativo)
{
    _ativo = ativo;
}

}
