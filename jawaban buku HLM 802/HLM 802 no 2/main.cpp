#include <iostream>
#include <iomanip>

#include "main.h"

using namespace std;



int main()
{
    Employee one("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee two("Mark Jones", 39119, "IT", "Programmer");
    Employee three("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << setw(20) << left << "NAME" << setw(20) << left << "ID NUMBER"
         << setw(20) << left << "DEPARTMENT" << setw(20) << left << "POSITION" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << setw(20) << left << one.getName() << setw(20) << left << one.getIdNumber()
         << setw(20) << left << one.getDepartment() << setw(20) << left << one.getPosition() << endl;
    cout << setw(20) << left << two.getName() << setw(20) << left << two.getIdNumber()
         << setw(20) << left << two.getDepartment() << setw(20) << left << two.getPosition() << endl;
    cout << setw(20) << left << three.getName() << setw(20) << left << three.getIdNumber()
         << setw(20) << left << three.getDepartment() << setw(20) << left << three.getPosition() << endl;

    return 0;
}
