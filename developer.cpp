#include "developer.h"

Developer::Developer()
{

}

void Developer::getInfo()
{
    Developer *dev = new Developer;
    cout << "Name: " << dev->getName() << endl;
    cout << "Surname: " << dev->getSurname() << endl;
    cout << "Office: " << dev->getOffice() << endl;
    cout << "Salary:" << dev->getSalary() << endl;
    cout << "Language: " << dev->getLanguage() << endl;
    cout << "Institute:" << dev->getInstitute() << endl;
    delete dev;
}

void Developer::getSumSalary()
{
    Developer *dev = new Developer;
    cout << "Sum salary:" << dev->getSalary() << endl;
    delete dev;
}

