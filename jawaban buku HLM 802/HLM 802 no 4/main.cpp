#include <iostream>
#include <iomanip>

using namespace std;

class PersonalData
{
    string name;
    string address;
    int age;
    int phoneNumber;
public:
    PersonalData(string a, string b, int c, int d)
    {
        name = a;
        address = b;
        age = c;
        phoneNumber = d;
    }
    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }
    int getAge()
    {
        return age;
    }
    int getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    PersonalData data[3] = {PersonalData("Vero", "TS 2, West Jakarta", 18, 81111),
                          PersonalData("Grace", "TS 2, West Jakarta", 19, 81895),
                          PersonalData("Someone", "TS 2, West Jakarta", 29, 8483990)};

    for (int i = 0; i < 3; i++)
    {
        cout << setw(20) << left << data[i].getName() << setw(20) << left << data[i].getAddress() << setw(20) << left
             << data[i].getAge() << setw(20) << left << data[i].getPhoneNumber() << endl;
    }


    return 0;
}
