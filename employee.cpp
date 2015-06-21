#include "employee.h"

void Employee::setOffice(string str)
{

    switch(str[0])
    {
    case '0':
        office_ = "Millwright";
        break;

    case '1':
        office_ = "Electronics";
        break;

    case '2':
        office_ = "Developer";
        break;

    default:
        office_ = "NO OFFICE";
        break;

    }
}















