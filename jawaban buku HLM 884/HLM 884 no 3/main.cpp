#include <iostream>
#include <cstdlib>

using namespace std;


class DayOfYear
{
    int dayOfMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string Month [12] = {"january","February","March","April",
                                "May","June","July","August","September",
                                "October","November","December"};
    int today;
public:
    int index;

    DayOfYear(int day, string Mon)
    {
        today = day;

        for (int i = 0; i < 12; i++)
        {
            if (Mon == Month[i])
            {
                index = i;
            }

        }

        if (day < 0 && day > dayOfMonth[index])
            exit(0);
        else
        {

        }

    }
    void print()
    {
        cout << "Today " << Month[index] << " Date " << today;

    }
};

int main()
{
    int n;
    cout << "Please insert number of days" << endl;
    cin >> n;

    DayOfYear day (n);

    day.print();

    return 0;
}
