#include <iostream>
#include <cstdlib>

using namespace std;

class PersonalData
{
protected:
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
protected:
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

class PreferedCustomer:public CustomerData
{
private:
    double purchaseAmount;
    int discountLevel;
public:
    PreferedCustomer()
    {
        purchaseAmount = 0;
        discountLevel = 0;
    }
    PreferedCustomer (double p)
    {
        purchaseAmount = p;

        if (p >= 500 && p < 1000)
        {
            discountLevel = 5;
        }
        else if (p < 500)
        {
            discountLevel = 0;
        }
        else if (p >= 1000 && p < 1500)
        {
            discountLevel = 6;
        }
        else if (p >= 1500 && p < 2000)
        {
            discountLevel = 7;
        }
        else if (p >= 2000)
        {
            discountLevel = 10;
        }else
        {
            cout << "Negative input unaccepted ";
            exit(0);
        }
    }
    double getPurchasedAmount()
    {
        return purchaseAmount;
    }
    double getDiscount ()
    {
        return discountLevel;
    }

};
using namespace std;

int main()
{
    string a;
    int cusNum;
    int choice;
    double amount;
    PreferedCustomer one;

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

    cout << "Input total amount spent" << endl;
    cin >> amount;

    new (&one) PreferedCustomer(amount);//to reconstruct

    cout << "Your future discount will be " ;
    cout << one.getDiscount() << "%";



    return 0;
}
