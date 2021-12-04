#pragma once
#include "MAP.h"
#include "CAD.h"

ref class servicesclient
{
private:
    CAD^ oCad;
    CLclient^ oMap;
public:
    servicesclient(void);
    System::Data::DataSet^ selectionnerclients(System::String^);
    void insererclient(CLclient^);
    void supprimerclient(CLclient^);
    void modifierclient(CLclient^);
    void setoMap(CLclient^);
    CLclient^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);

};