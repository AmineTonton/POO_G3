#include "pch.h"
#include "MAP.h"
#include "ServicesAdresse.h"

servicesadresse::servicesadresse(void)
{
    this->oCad = gcnew CAD();
    this->oMap = gcnew CLadresse();
}

DataSet^ servicesadresse::selectionneradresse(String^ nomtable)
{
    String^ sql;
    sql = this->oMap->Select();
    return this->oCad->getRows(sql, nomtable);
}

void  servicesadresse::insereradresse(CLadresse^ adresse)
{
    String^ sql;
    this->oMap = adresse;
    sql = this->oMap->Insert();
    this->oCad->actionRows(sql);
}

void servicesadresse::supprimeradresse(CLadresse^ adresse)
{

}

void servicesadresse::modifieradresse(CLadresse^ adresse)
{

}
void servicesadresse::setoMap(CLadresse^ adresse)
{
    this->oMap = adresse;
}
CLadresse^ servicesadresse::getoMap(void)
{
    return oMap;
}

void servicesadresse::setoCad(CAD^ connection)
{
    this->oCad = connection;
}
CAD^ servicesadresse::getoCad(void)
{
    return oCad;
}