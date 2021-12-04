#pragma once
#include "MAP.h"
#include "CAD.h"

ref class servicespersonnel
{
private:
    CAD^ oCad;
    CLpersonnel^ oMap;
public:
    servicespersonnel(void);
    System::Data::DataSet^ selectionnerpersonnel(System::String^);
    void insererpersonnel(CLpersonnel^);
    void supprimerpersonnel(CLpersonnel^);
    void modifierpersonnel(CLpersonnel^);
    void setoMap(CLpersonnel^);
    CLpersonnel^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);
};