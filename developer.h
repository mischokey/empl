#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "employee.h"

class Developer : public Employee
{
private:
    string language_;
    string institute_;
public:
    Developer();

    void setLanguage(string str){language_ = str;}
    void setInstitute(string str){institute_ = str;}
    string getLanguage(){return language_;}
    string getInstitute(){return institute_;}
    void getInfo();
    void getSumSalary();
};

#endif // DEVELOPER_H
