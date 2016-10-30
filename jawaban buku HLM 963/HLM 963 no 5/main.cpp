#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

class Time
{
    protected:
        int hour;
        int min;
        int sec;
    public:
        // Default constructor
        Time()
        { hour = 0; min = 0; sec = 0; }

        // Constructor
        Time(int h, int m, int s)
        { hour = h; min = m; sec = s; }

};

class MilTime:public Time
{
protected:
    int milHours;
    int milSeconds;
public:
    MilTime(){}
    MilTime (string milHours, int milSeconds)
    {
        string temp;// = "23:00 pm";
        if (milHours.length()==8)
        temp = milHours.substr(6,2);

        else
        temp = milHours.substr(5,2);

        string h = milHours.substr(0,2);

        int h2;// = atoi(h);

        h2 = atoi(h.c_str());

        if (h2 > 11 || h2 < 0)
        {
            cout << "wrong input " <<endl;
            exit (0);
        }

        if (temp == "pm")
        {
            h2 +=12;
        }

        string m = milHours.substr(3,2);

        int m2 = atoi(m.c_str());

        h2*=100;
        h2 +=m2;

        this->milHours = h2;

        this->milSeconds = milSeconds;

        this->hour = h2/100;
        this->min = h2%100;
        this->sec = milSeconds;
    }

    bool operator < (const MilTime &right)
    {
        if (hour < right.hour)
            return false;
        else if (min <= right.min && hour == right.hour)
            return true;
        else
            return true;
    }

    MilTime operator -(const MilTime &right)
    {
        MilTime temp;
        temp.milHours = milHours - right.milHours;
        return temp;
    }

    void setTime (string milHours, int milSeconds)
    {
       string temp;// = "23:00 pm";
        if (milHours.length()==8)
        temp = milHours.substr(6,2);

        else
        temp = milHours.substr(5,2);

        string h = milHours.substr(0,2);

        int h2;// = atoi(h);

        h2 = atoi(h.c_str());

        if (temp == "pm")
        {
            h2 +=12;
        }

        string m = milHours.substr(3,2);

        int m2 = atoi(m.c_str());

        h2*=100;
        h2 +=m2;

        this->milHours = h2;

        this->milSeconds = milSeconds;

        this->hour = h2/100;
        this->min = h2%100;
        this->sec = milSeconds;
    }

    int getHour()
    {
        return milHours;
    }

    int getMilHours(){
        return this->milHours;
    }


};

class TimeClock:public MilTime
{
private:
    MilTime *startTime;
    MilTime *endTime;
public:
    TimeClock (string sHour, string eHour)
    {
        startTime = new MilTime(sHour,0);
        endTime = new MilTime(eHour,0);

        if (*startTime < *endTime)
        {
            cout << "wrong input time" << endl;
            exit(0);
        }
        else
            *startTime = *endTime - *startTime;
    }
    ~TimeClock()
    {
        double temp = startTime->getMilHours();
        temp/=100;
        cout << "Parking " << temp << " hour " << endl;
    }
};

int main(){

    string h1;
    string h2;
    int sec;

    cout << "Please enter start time (format: \"hh:mm (am/pm)\") " << endl;
    getline(cin, h1);
    cout << "Please enter end time (format: \"hh:mm (am/pm)\") " << endl;
    getline(cin, h2);

    {TimeClock (h1, h2);}
}
