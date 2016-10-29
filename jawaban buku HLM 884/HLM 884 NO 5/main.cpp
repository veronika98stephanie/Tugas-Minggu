#include <iostream>
//#include <windows.h> utk fungsi system (apa)

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

};

class TimeOff
{
private:
    NumDays *maxSickDays;
    NumDays *sickTaken;
    NumDays *maxVacation;
    NumDays *vacTaken;
    NumDays *maxUnpaid;
    NumDays *unpaidTaken;
    string name;
    int idNum;
public:
    TimeOff (string name, int idNum)
    {
        this->name = name;
        this->idNum = idNum;
        this->maxVacation = new NumDays(240);
        this->maxSickDays = new NumDays(240);
        this->maxUnpaid = new NumDays(240);
        this->sickTaken = new NumDays(0);
        this->vacTaken = new NumDays(0);
        this->unpaidTaken = new NumDays(0);
    }

    string getName ()
    {
        return name;
    }

    int getId ()
    {
        return idNum;
    }

    NumDays getMaxSickDays ()
    {
        return *maxSickDays-*sickTaken;
    }

    NumDays getMaxVacation ()
    {
        return *maxVacation-*vacTaken;
    }

    NumDays getMaxUnpaid ()
    {
        return *maxUnpaid-*unpaidTaken;
    }

    void setSickDays (double h)
    {
        NumDays temp(h);
        *sickTaken = temp + *sickTaken;
    }
    void setVacTaken (double h)
    {
        NumDays temp(h);
        *vacTaken = temp + *vacTaken;
    }
    void setUnpaidTaken (double h)
    {
        NumDays temp(h);
        *unpaidTaken = temp + *unpaidTaken;
    }
};

int main()
{
    string name;
    int idNum;
    int choice;
    int option;

    cout << "Please input your name and id number " << endl;
    cin >> name >> idNum;

    TimeOff staff (name, idNum);

    cout << "-NAME-" << endl << staff.getName() << endl;
    cout << "-ID NUMBER-" << endl << staff.getId() << endl;

    do
    {
    //while(1){ :catatan cara looping lain
        //system("cls");  : untuk clear console log
        cout << "Please enter your choice " << endl;
        cout << "1. Sick (remaining " << staff.getMaxSickDays().getHour() << ")" << endl;
        cout << "2. Vacation (remaining " << staff.getMaxVacation().getHour() << ")" << endl;
        cout << "3. Unpaid leave (remaining " << staff.getMaxUnpaid().getHour() << ")" << endl;
        cout << "4. Exit " << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "How long (in day(s)): " <<endl;
            cin >> option;

            staff.setSickDays(option*8);

            cout << staff.getMaxSickDays().getHour() << endl;
        }
        else if (choice == 2)
        {
            cout << "How long (in day(s)): " <<endl;
            cin >> option;

            staff.setVacTaken(option*8);

            cout << staff.getMaxVacation().getHour() << endl;
        }
        else if (choice == 3)
        {
            cout << "How long (in day(s)): " <<endl;
            cin >> option;

            staff.setUnpaidTaken(option*8);

            cout << staff.getMaxUnpaid().getHour() << endl;
        }
    } while (choice != 4);
    return 0;
}
