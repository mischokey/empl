#ifndef MILLWRIGHT_H
#define MILLWRIGHT_H
#include "employee.h"


class Millwright : public Employee
{

private:
    bool department_;

public:
    Millwright();

    void setDepartment(string str);
    bool getDepartment(){return department_;}
};

#endif // MILLWRIGHT_H
