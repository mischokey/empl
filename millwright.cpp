#include "millwright.h"

Millwright::Millwright()
{

}

void Millwright::setDepartment(string str)
{
    switch(str[0])
    {
    case '0':
        department_ = "workshop";
        break;

    case '1':
        department_ = "warehouse";
        break;

    default:
        break;
    }

}
