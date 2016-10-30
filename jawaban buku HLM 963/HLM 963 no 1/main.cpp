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

class ProductionWorker:public Employee
{
    int shift;
    double payRate;
    double minNumAttend;
    double numAttended;
    double monthlyBonus;

public:
    ProductionWorker()
    {
        shift = 0;
        payRate = 0;
    }
    ProductionWorker(int shift, double payRate, double numAttended)
    {
        this->shift = shift;
        this->payRate = payRate;
        this->numAttended = numAttended;
        this->minNumAttend = 240;
        this->monthlyBonus = 500;

        if(this->shift == 1)
        {
            cout << "SHIFT\t\t: Day shift" << endl;
            cout << "PAY RATE\t: " << this->payRate*this->numAttended << endl;
            cout << "MIN NUM ATTENDED (REMAINING)\t: " << minNumAttend - numAttended << endl;
            cout << "MONTHLY BONUS\t: " << monthlyBonus << endl;
        }
        if(this->shift == 2)
        {
            cout << "SHIFT\t\t: Night shift" << endl;
            cout << "PAY RATE\t: " << this->payRate*this->numAttended << endl;
            cout << "MIN NUM ATTENDED (REMAINING)\t: " << minNumAttend - numAttended << endl;
            cout << "MONTHLY BONUS\t: " << monthlyBonus << endl;
        }
    }
};

int main()
{
    string name,
           number;
    int hireDate,
        shift;
    double payRate;
    double hourAttended;

    cout << "Please enter your Name, Number, and Hire date. ";
    cin >> name >> number >> hireDate;

    cout << "Please enter your shift" << endl << "1. day (shift 1) " << endl << "2. night (shift2) " << endl;
    cin >> shift;

    cout << "Please enter your payrate" << endl;
    cin >> payRate;

    cout << "Please input the hour attended " << endl;
    cin >> hourAttended;

    ProductionWorker one;
    one.setHireDate(hireDate);
    one.setName(name);
    one.setNumber(number);

    cout << "NAME\t\t: " << one.getName() << endl;
    cout << "NUMBER\t\t: " << one.getNumber() << endl;
    cout << "HIRE DATE\t: " << one.getHireDate() << endl;

    ProductionWorker (shift, payRate, hourAttended);


    return 0;
}
