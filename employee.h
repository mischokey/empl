#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;
//#include "headers.h"
#include <string>
#include <iostream>
#include <unistd.h>

class Employee
{
private:
    string name_;
    string surname_;
    string office_;
    string salary_;
public:
    Employee(){}

    void setName(string str){name_ = str;}
    void setSurname(string str){surname_ = str;}
    void setOffice(string str);
    void setSalary(string str){salary_ = str;}

    string getName(){return name_;}
    string getSurname(){return surname_;}
    string getOffice(){return office_;}
    string getSalary(){return salary_;}


    virtual void getInfo(){}
    virtual void getSumSalary(){}


};

#endif // EMPLOYEE_H
