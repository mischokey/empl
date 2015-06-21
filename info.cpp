#include "info.h"

Info::Info()
{
}

int Info::inputAction()
{
    cout << "Select an action: " << endl;
    cout << "1: input info" << endl;
    cout << "2: output info" << endl;
    cout << "0: exit program" << endl;
    string str;
    cin >> str;
    switch(str[0])
    {
    case '1':
        return 1;
        break;

    case '2':
        return 2;
        break;

    case '0':
        return -1;
        break;

    default:
        cout << "no action";
        break;

    }


}

int Info::inputInfo()
{
    while(true)
    {
        cout << "Select office:" << endl;
        cout << "0: Millwright" << endl;
        cout << "1: Electronics" << endl;
        cout << "2: Developer" << endl;
        cout << "3: Back" << endl;

        string str;
        cin >> str;

        switch(str[0])
        {
        case '0':
        {
            Millwright* mill = new Millwright;
            mill->setOffice(str);
            cout << "Enter Name: " << endl;
            cin >> str;
            mill->setName(str);
            cout <<  "Enter Surename: " << endl;
            cin >> str;
            mill->setSurname(str);
            cout <<  "Enter salary: " << endl;
            cin >> str;
            mill->setSalary(str);
            cout <<  "Enter departament: " << endl;
            cin >> str;
            mill->setDepartment(str);
            delete mill;
        }
            break;


        case '1':
            {
                Electronics* mill = new Electronics;
                mill->setOffice(str);
                cout << "Enter Name: " << endl;
                cin >> str;
                mill->setName(str);
                cout <<  "Enter Surename: " << endl;
                cin >> str;
                mill->setSurname(str);
                cout <<  "Enter salary: " << endl;
                cin >> str;
                mill->setSalary(str);
                cout <<  "Enter Law OM: " << endl;
                cin >> str;
                mill->setLawOM(str);
                delete mill;
            }
            break;


        case '2':
            {
                Developer* mill = new Developer;
                mill->setOffice(str);
                cout << "Enter Name: " << endl;
                cin >> str;
                mill->setName(str);
                cout <<  "Enter Surename: " << endl;
                cin >> str;
                mill->setSurname(str);
                cout <<  "Enter salary: " << endl;
                cin >> str;
                mill->setSalary(str);
                cout <<  "Enter language: " << endl;
                cin >> str;
                mill->setLanguage(str);
                cout <<  "Enter institute: " << endl;
                cin >> str;
                mill->setInstitute(str);

                delete mill;
            }
            break;


        case '3':
            return -1;
            break;


        }
    }

}

void Info::outputInfo()
{

}
