#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <iostream>

using namespace std;

class Employee
{
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee (string name, int idNumber, string department, string position)
    {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }Employee (string name, int idNumber)
    {
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }Employee ()
    {
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    }

    string getName()
    {
        return name;
    }

    int getIdNumber()
    {
        return idNumber;
    }

    string getDepartment()
    {
        return department;
    }

    string getPosition()
    {
        return position;
    }
};

#endif // MAIN_H_INCLUDED
