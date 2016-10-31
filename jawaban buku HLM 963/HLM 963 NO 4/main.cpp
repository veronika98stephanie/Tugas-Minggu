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
    int milHours;
    int milSeconds;
public:
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
            exit (0);

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

    string getStandHr ()
    {
        if(min<10)
        {
           if (sec<10)
           {
            return to_string(hour) + ":0" + to_string(min) + ":0" + to_string(sec);
           }
            return to_string(hour) + ":0" + to_string(min) + ":" + to_string(sec);
        }
        if (min >= 10)
        {
            if(sec < 10)
            {
                return to_string(hour) + ":" + to_string(min) + ":0" + to_string(sec);
            }
            return to_string(hour) + ":" + to_string(min) + ":" + to_string(sec);
        }
    }
};

int main(){

    string h;
    int sec;

    cout << "Please enter the time (format: \"hh:mm (am/pm)\") and the second " << endl;
    getline(cin, h);
    cin >> sec;

    MilTime temp(h,sec);
    cout << temp.getHour() << " and " << temp.getStandHr() << endl;
}
