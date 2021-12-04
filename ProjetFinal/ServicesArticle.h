#pragma once
#include "MAP.h"
#include "CAD.h"

ref class servicesarticle
{
private:
    CAD^ oCad;
    CLarticle^ oMap;
public:
    servicesarticle(void);
    System::Data::DataSet^ selectionnerarticles(System::String^);
    void insererarticle(CLarticle^);
    void supprimerarticle(CLarticle^);
    void modifierarticle(CLarticle^);
    void setoMap(CLarticle^);
    CLarticle^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);
};