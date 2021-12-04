#include "pch.h"
#include "MAP.h"
#include "ServicesClient.h"

servicesclient::servicesclient(void)
{
    this->oCad = gcnew CAD();
    this->oMap = gcnew CLclient();
}

DataSet^ servicesclient::selectionnerclients(String^ nomtable)
{
    String^ sql;
    sql = this->oMap->Select();
    return this->oCad->getRows(sql, nomtable);
}

void  servicesclient::insererclient(CLclient^ client)
{
    String^ sql;
    this->oMap = client;
    sql = this->oMap->Insert();
    this->oCad->actionRows(sql);
}

void servicesclient::supprimerclient(CLclient^ client)
{
    String^ sql;
    this->oMap= client;
    sql = this->oMap->Delete();
    this->oCad->actionRows(sql);
}

void servicesclient::modifierclient(CLclient^ client)
{

}
void servicesclient::setoMap(CLclient^ client)
{
    this->oMap = client;
}
CLclient^ servicesclient::getoMap(void)
{
    return oMap;
}

void servicesclient::setoCad(CAD^ connection)
{
    this->oCad = connection;
}
CAD^ servicesclient::getoCad(void)
{
    return oCad;
}