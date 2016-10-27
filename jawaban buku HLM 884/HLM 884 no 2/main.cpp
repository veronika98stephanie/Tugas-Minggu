#include <iostream>
#include <cstdlib>

using namespace std;


class DayOfYear
{
    int day;
    string Month [12] = {"January","February","March","April",
                                "May","June","July","August","September",
                                "October","November","December"};
public:

    DayOfYear(int day)
    {
        if (day > 0 && day < 366)
        this->day = day;
        else
            exit (0);
    }

    void print()
    {
        int a;
        int dayOfMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int totalDay = 365;
        int position = 0;

        for (int j = 11; j > 0; j--)
        {
            if (day <= totalDay)
            {
                position = j;
                totalDay -= dayOfMonth[j];
            }
        }

        cout << "Day " << day;

        for (int i = 0; i < position; i++)
        {
            int *ptrDate = &day;
            *ptrDate -= dayOfMonth[i];
        }

        cout << " would be " << Month[position] << " " << day;
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
