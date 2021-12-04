#include "pch.h"
#include "MAP.h"
#include "ServicesCommande.h"

servicescommande::servicescommande(void)
{
    this->oCad = gcnew CAD();
    this->oMap = gcnew CLcommande();
}

DataSet^ servicescommande::selectionnercommandes(String^ nomtable)
{
    String^ sql;
    sql = this->oMap->Select();
    return this->oCad->getRows(sql, nomtable);
}

void  servicescommande::inserercommande(CLcommande^ commande)
{
    String^ sql;
    this->oMap = commande;
    sql = this->oMap->Insert();
    this->oCad->actionRows(sql);
}

void servicescommande::supprimercommande(CLcommande^ commande)
{
    String^ sql;
    this->oMap = commande;
    sql = this->oMap->Delete();
    this->oCad->actionRows(sql);
}

void servicescommande::modifiercommande(CLcommande^ commande)
{

}

void servicescommande::setoMap(CLcommande^ commande)
{
    this->oMap = commande;
}
CLcommande^ servicescommande::getoMap(void)
{
    return oMap;
}

void servicescommande::setoCad(CAD^ connection)
{
    this->oCad = connection;
}
CAD^ servicescommande::getoCad(void)
{
    return oCad;
}