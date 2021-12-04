#include "pch.h"
#include "MAP.h"
#include "ServicesPersonnel.h"

servicespersonnel::servicespersonnel(void)
{
    this->oCad = gcnew CAD();
    this->oMap = gcnew CLpersonnel();
}

DataSet^ servicespersonnel::selectionnerpersonnel(String^ nomtable)
{
    String^ sql;
    sql = this->oMap->Select();
    return this->oCad->getRows(sql, nomtable);
}

void servicespersonnel::insererpersonnel(CLpersonnel^ personnel)
{
    String^ sql;
    this->oMap = personnel;
    sql = this->oMap->Insert();
    this->oCad->actionRows(sql);
}

void servicespersonnel::supprimerpersonnel(CLpersonnel^ personnel)
{
    String^ sql;
    this->oMap = personnel;
    sql = this->oMap->Delete();
    this->oCad->actionRows(sql);
}

void servicespersonnel::modifierpersonnel(CLpersonnel^ personnel)
{

}

void servicespersonnel::setoMap(CLpersonnel^ personnel)
{
    this->oMap = personnel;
}
CLpersonnel^ servicespersonnel::getoMap(void)
{
    return oMap;
}

void servicespersonnel::setoCad(CAD^ connection)
{
    this->oCad = connection;
}
CAD^ servicespersonnel::getoCad(void)
{
    return oCad;
}