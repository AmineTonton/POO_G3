#include "pch.h"
#include "MAP.h"
#include "ServicesArticle.h"

servicesarticle::servicesarticle(void)
{
    this->oCad = gcnew CAD();
    this->oMap = gcnew CLarticle();
}

DataSet^ servicesarticle::selectionnerarticles(String^ nomtable)
{
    String^ sql;
    sql = this->oMap->Select();
    return this->oCad->getRows(sql, nomtable);
}

void  servicesarticle::insererarticle(CLarticle^ article)
{
    String^ sql;
    this->oMap = article;
    sql = this->oMap->Insert();
    this->oCad->actionRows(sql);
}

void servicesarticle::supprimerarticle(CLarticle^ article)
{
    String^ sql;
    this->oMap = article;
    sql = this->oMap->Delete();
    this->oCad->actionRows(sql);
}

void servicesarticle::modifierarticle(CLarticle^ article)
{

}

void servicesarticle::setoMap(CLarticle^ article)
{
    this->oMap = article;
}
CLarticle^ servicesarticle::getoMap(void)
{
    return oMap;
}

void servicesarticle::setoCad(CAD^ connection)
{
    this->oCad = connection;
}
CAD^ servicesarticle::getoCad(void)
{
    return oCad;
}