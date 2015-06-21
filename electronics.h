#ifndef ELECTRONICS_H
#define ELECTRONICS_H
#include <string>
#include "employee.h"
using namespace std;

class Electronics :public Employee
{
private:
    string lawOM_;

public:
    Electronics();

    void setLawOM(string str){lawOM_ = str;}
    string getLawOM(){return lawOM_;}
    void getInfo(){}
    void getSumSalary(){}
};

#endif // ELECTRONICS_H
