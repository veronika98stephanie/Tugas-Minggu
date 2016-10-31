#include <iostream>

using namespace std;

class PersonalData
{
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;
public:
    string getLastName()
    {
        return lastName;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getAddress()
    {
        return address;
    }
    string getCity()
    {
        return city;
    }
    string getState()
    {
        return state;
    }
    string getZip()
    {
        return zip;
    }
    string getPhone()
    {
        return phone;
    }
    void setlastName(string ln)
    {
        lastName = ln;
    }
    void setfirstName(string fn)
    {
        firstName = fn;
    }
    void setaddress(string a)
    {
        address = a;
    }
    void setcity(string c)
    {
        city = c;
    }
    void setstate(string s)
    {
        state = s;
    }
    void setzip(string z)
    {
        zip = z;
    }
    void setphone(string p)
    {
        phone = p;
    }
};

class CustomerData:public PersonalData
{
    int customerNumber;
    bool mailingList;
public:
     int getcustomerNumber()
    {
        return customerNumber;
    }
    bool getmailingList()
    {
        return mailingList;
    }
    void setcustomerNumber(int ln)
    {
        customerNumber = ln;
    }
    void setmailingList(int fn)
    {
        if (fn == 1)
        {
            mailingList = true;
        }
        else
            mailingList = false;
    }

};
using namespace std;

int main()
{
    string a;
    int cusNum;
    int choice;
    CustomerData one;

    cout << "Please input your last name" << endl;
    getline (cin, a);
    one.setlastName(a);
    cout << "Please input your first name" << endl;
    getline (cin, a);
    one.setfirstName(a);
    cout << "Please input your address" << endl;
    getline (cin, a);
    one.setaddress(a);
    cout << "Please input your city" << endl;
    getline (cin, a);
    one.setcity(a);
    cout << "Please input your state" << endl;
    getline (cin, a);
    one.setstate(a);
    cout << "Please input your zip" << endl;
    getline (cin, a);
    one.setzip(a);
    cout << "Please input your phone" << endl;
    getline (cin, a);
    one.setphone(a);
    cout << "Please input your customer number" << endl;
    cin >> cusNum;
    one.setcustomerNumber(cusNum);
    cout << "Do you wish to be in the emailing list ? (1. Y/2. N)" << endl;
    cin >> choice;

    one.setmailingList(choice);

    cout << "Your name\t : " << one.getFirstName() << " " << one.getLastName() << endl;
    cout << "Address\t\t : " << one.getAddress() << endl;
    cout << "City\t\t : " << one.getCity() <<endl;
    cout << "State\t\t : " << one.getState() << endl;
    cout << "ZIP\t\t : " << one.getZip() << endl;
    cout << "Phone\t\t : " << one.getPhone() << endl;
    cout << "Customer number\t : " << one.getcustomerNumber() << endl;

    if (one.getmailingList())
    {
        cout << "You are in the mailing list " << endl;
    }
    else
    {
        cout << "You are not in the mailing list " << endl;
    }

    return 0;
}
