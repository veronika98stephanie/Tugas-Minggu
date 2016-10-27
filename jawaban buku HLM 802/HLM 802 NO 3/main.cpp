#include <iostream>

using namespace std;

class Car
{
    int yearModel;
    string make;
    int speed;
public:
    Car (string a, int b)
    {
        yearModel = b;
        make = a;
        this->speed = 0;
    }

    int getYearModel()
    {
        return yearModel;
    }

    string getMake()
    {
        return make;
    }

    int getspeed()
    {
        return speed;
    }

    int accelerate()
    {
       this->speed +=5;
        return speed;
    }

    int breaks ()
    {
        this->speed -=5;
        return speed;
    }

};

int main()
{
    int choice;
    int year;
    string make;

    cout << "Please input the name and the year model" << endl;
    cin >> make >> year;
    Car myCar (make, year);

    do
    {
        cout << "What do you want to do?" << endl << "1. Accelerate " << endl << "2. Break" << endl << "3. quit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            myCar.accelerate();
            cout << "Car " << myCar.getMake() << ", Year model "
                 << myCar.getYearModel() << " is now " << myCar.getspeed() << " Km/Hour" << endl;
        }
        else if (choice == 2)
        {
            myCar.breaks();
            cout << "Car " << myCar.getMake() << ", Year model"
                 << myCar.getYearModel() << "is now " << myCar.getspeed() << " Km/Hour"<< endl;
        }
    }while (choice != 3);

    return 0;
}
