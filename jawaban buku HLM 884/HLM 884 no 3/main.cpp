#include <iostream>
#include <cstdlib>

using namespace std;


class DayOfYear
{
    int day;
    string Month [12] = {"January","February","March","April",
                                "May","June","July","August","September",
                                "October","November","December"};
    int dayOfMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
public:
    int position = 0;
    DayOfYear(int day)
    {
        if (day > 0 && day < 366)
        this->day = day;
        else
            exit (0);
    }

    void print()
    {
        int totalDay = 365;

        for (int j = 11; j > 0; j--)
        {
            if (day <= totalDay)
            {
                position = j-1;
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

    DayOfYear operator++ ()
    {
        ++day;
        simplify();
        return *this;
    }

    DayOfYear operator-- ()
    {
        --day;
        --day;
        simplify();
        return *this;
    }

    int getDay()
    {
        return day;
    }

    string getMonth ()
    {
        return Month[position];
    }

    int simplify ()
    {
        if (day > dayOfMonth [position])
        {
            day -= dayOfMonth[position];
            ++position;
        }
        else if (day <= 0)
        {
            --position;
            if (position == -1)
            {
                position = 11;
            }
            day += dayOfMonth [position];
        }else
        {

        }
    }
};

int main()
{
    int n;
    cout << "Please insert number of days" << endl;
    cin >> n;

    DayOfYear day (n);

    day.print();

    DayOfYear tomorrow (n);
    DayOfYear yesterday (n);

    tomorrow = ++day;//atau day.operator++();
    yesterday = ++day;//atau day.operator--();

    cout << endl << "Tomorrow is " << tomorrow.getDay() << " " << tomorrow.getMonth();
    cout << endl << "Yesterday is " << yesterday.getDay() << " " << yesterday.getMonth();


    return 0;
}
