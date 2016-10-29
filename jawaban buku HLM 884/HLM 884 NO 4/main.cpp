#include <iostream>

using namespace std;

class NumDays
{
    double hour;
    double day;
    //1 hari 8 jam;
public:
    NumDays ()
    {

    }
    NumDays(double hour)
    {
        this->hour = hour;
        this->day = hour/8;
    }

    NumDays (double hour, double day)
    {
        this->hour = hour;
        this->day = day;
        cout << "Hours : " << this->hour << endl;
        cout << "Days : " << this->day << endl;
    }

    double getHour ()
    {
        return hour;
    }

    double getDay ()
    {
        double temp = hour/8;
        return temp;
    }

    NumDays operator + (const NumDays &right)
    {
        NumDays temp;
        temp = hour + right.hour;
        return temp;
    }

    NumDays operator - (const NumDays &right)
    {
        NumDays temp;
        temp = hour - right.hour;
        return temp;
    }

    NumDays operator - (NumDays &right)
    {
        NumDays temp;
        temp = hour - right.hour;
        return temp;
    }

    NumDays operator ++ ()
    {
        cout << "++hour = " << ++hour << endl;

        return *this;
    }
    NumDays operator ++ (int)
    {
        NumDays temp(hour, day);
        cout << "hour++ = " << hour++ << endl;
        return *this;
    }
    NumDays operator -- ()
    {
        cout << "--hour = " << --hour << endl;

        return *this;
    }

    NumDays operator -- (int)
    {
        NumDays temp(hour, day);
        cout << "hour-- = " << hour-- << endl;
        return *this;
    }
};

int main()
{

    int h;

    cout << "Please input the hour1 " << endl;
    cin >> h;
    NumDays today(h);

    cout << "Please input the hour2 " << endl;
    cin >> h;
    NumDays today1(h);

    today = today + today1 ;

    cout << "Today = today + today1 " << today.getDay()<< endl;

    today = today - today1 ;

    cout << "Today = today - today1 " << today.getDay()<< endl;

    today++;

    cout << endl;

    today--;

    cout << endl;

    ++today;

    cout << endl;

    --today;

    cout << endl;

    return 0;
}
