#pragma once
#include "MAP.h"
#include "CAD.h"
#include <iostream>


ref class servicesville
{
private:
    CAD^ oCad;
    CLville^ oMap;
public:
    servicesville(void);
    System::Data::DataTable^ selectionnerville();
    void setoMap(CLville^);
    CLville^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);

};