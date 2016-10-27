#include <iostream>
#include <cstdlib>
#include "date.h"
#include "date.cpp"

using namespace std;

int main()
{
    string monthArr [12] = {"January", "February" , "March", "April",
                            "May", "June", "July", "August", "September",
                            "October", "November", "December"};

    int d, m, y;

    cout << "Input the date dd/mm/yyyy" << endl;
    cin >> d >> m >> y;

   Date today (d, m, y);

    cout << "-DATE-" << endl;
    cout << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << endl;
    cout << monthArr[today.getMonth()-1] << " " << today.getDay() << ", " << today.getYear() << endl;
    cout << today.getDay() << " " << monthArr[today.getMonth()-1] << " " << today.getYear() << endl;

    return 0;
}
