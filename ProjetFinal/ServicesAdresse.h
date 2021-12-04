#pragma once
#include "MAP.h"
#include "CAD.h"

ref class servicesadresse
{
private:
    CAD^ oCad;
    CLadresse^ oMap;
public:
    servicesadresse(void);
    System::Data::DataSet^ selectionneradresse(System::String^);
    void insereradresse(CLadresse^);
    void supprimeradresse(CLadresse^);
    void modifieradresse(CLadresse^);
    void setoMap(CLadresse^);
    CLadresse^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);

    //void ajouterUneAdresse(System::String^, System::String^);
    //void supprimerAdresse(int^);

};