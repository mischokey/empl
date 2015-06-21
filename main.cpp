#include "employee.h"
#include "developer.h"
#include "info.h"



int main()
{
    cout << "Hello Rodos!" << endl;
    string str;


    Info* info = new Info;

    int action ;
    while(action = info->inputAction() > 0)
    {
   switch(action)
   {
       case 1:

       info->inputInfo();

       break;

       case 2:
       info->outputInfo();
       break;

       case 0:
       return 0;
       break;

       default:
       break;


   }

}




    return 0;
}

