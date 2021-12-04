#pragma once
#include "MAP.h"
#include "CAD.h"

ref class servicescommande
{
private:
    CAD^ oCad;
    CLcommande^ oMap;
public:
    servicescommande(void);
    System::Data::DataSet^ selectionnercommandes(System::String^);
    void inserercommande(CLcommande^);
    void supprimercommande(CLcommande^);
    void modifiercommande(CLcommande^);
    void setoMap(CLcommande^);
    CLcommande^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);

};