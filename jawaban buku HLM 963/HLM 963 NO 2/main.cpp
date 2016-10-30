#include <iostream>

using namespace std;

class Employee
{
    string name;
    string number;
    int hireDate;

public:
    Employee ()
    {
        name = "";
        number = "";
        hireDate = 0;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setNumber(string number)
    {
        this->number = number;
    }

    void setHireDate(int hireDate)
    {
        this->hireDate = hireDate;
    }

    string getName()
    {
        return name;
    }

    string getNumber()
    {
        return number;
    }

    int getHireDate()
    {
        return hireDate;
    }
};

class ShiftSupervisor:public Employee
{
    double annualSalary;
    double annualProductionBonus;
public:
    ShiftSupervisor()
    {
        annualProductionBonus = 0;
        annualSalary = 0;
    }
    ShiftSupervisor(double annualSalary, double annualProductionBonus)
    {
        this->annualSalary = annualSalary;
        this->annualProductionBonus = annualProductionBonus;
        cout << "ANNUAL SALARY\t: " << this->annualSalary << endl;
        cout << "ANNUAL PRODUCTION BONUS: " << this->annualProductionBonus;
    }

    double getAnnual()
    {
        return annualSalary;
    }

    double getBonus()
    {
        return annualProductionBonus;
    }
};

int main()
{
    string name,
           number;
    int hireDate;
    double payRate,
           annualSalary,
           bonus;

    cout << "Please enter your Name, Number, and Hire date. ";
    cin >> name >> number >> hireDate;

    cout << "Please enter your annual salary" << endl;
    cin >> annualSalary;

    cout << "Please enter your Bonus" << endl;
    cin >> bonus;

    ShiftSupervisor one;

    one.setName(name);
    one.setNumber(number);
    one.setHireDate(hireDate);

    cout << "NAME\t\t: " << one.getName() << endl;
    cout << "NUMBER\t\t: " << one.getNumber() << endl;
    cout << "HIRE DATE\t: " << one.getHireDate() << endl;

    ShiftSupervisor(annualSalary, bonus);

    return 0;
}
