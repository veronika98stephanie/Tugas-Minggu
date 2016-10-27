#include <iostream>
#include <cstdlib>

using namespace std;

class Number
{
    int number;
    string lessThan20[20] = {" ", "one", "two", "three", "four", "five", "six", "seven"
                            , "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen"
                            , "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens [8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string hundred = "hundred";
    string thousand = "thousand";
public:
    Number(int number)
    {
        if (number >=0 && number<= 9999)
        {
            this->number = number;
        }
        else
        {
            cout << "You input the wrong number";
            exit(0);
        }
    }
    void print ()
    {
        if (number < 20)
        {
            cout << lessThan20[number];
        }
        else if (number >= 20 && number < 100)
        {
            int n = (number % 10);
            int t = number/10 - 2;
            cout << tens[t] << " " << lessThan20[n] << endl;
        }
        else if (number >= 100 && number<= 999)
        {
            if ((number%100) > 19)
            {
                int a = number/100;
                int b = (number%100)/10 - 2;
                int c = ((number%100)%10);
                cout << lessThan20[a] << " " << hundred << " " << tens[b] << lessThan20 [c];
            }else
            {
                int a = number/100;
                int b = (number%100);
                cout << lessThan20[a] << " " << hundred << " " << lessThan20 [b];
            }
        }
        else if (number >= 1000 && number <= 9999)
        {
            if (((number%1000)%100) > 19)
            {
                int a = number/1000;
                int b = ((number%1000)/100);
                int c = ((number%1000)%100)/10 - 2;
                int d = ((number%1000)%100)%10;
                cout << lessThan20[a] << " " << thousand << " " << lessThan20 [b] << " " << hundred << " " << tens[c] << " " << lessThan20[d];
            }else
            {
                int a = number/1000;
                int b = ((number%1000)/100);
                int c = ((number%1000)%100);
                cout << lessThan20[a] << " " << thousand << " " << lessThan20 [b] << " " << hundred << " and " << lessThan20[c];
            }
        }
    }
};

int main()
{
    int num;

    cout << "Please input a number more than equal to 0 and less than 9999" << endl;
    cin >> num;

    Number printa(num);

    printa.print();

    return 0 ;
}
