#include <iostream>
#include <cmath>

using namespace std;

class MortagePayment
{
private:
    double loan;
    double interestRate;
    double year;
public:
    void setLoan(double loan);
    void setInterestRate (double interestRate);
    void setYear (double year);
    double getPayment ();

};

void MortagePayment::setLoan (double loan)
{
    this->loan = loan;
}

void MortagePayment::setInterestRate (double interestRate)
{
    this->interestRate = interestRate;
}

void MortagePayment::setYear (double year)
{
    this->year = year;
}

double MortagePayment::getPayment()
{
    double term = pow((1+interestRate/12),12*year);
    return (loan*interestRate/12*term)/(term-1);
}
int main()
{
    MortagePayment first;

    double  loan,
            intrate,
            year;

    cout << "Insert loan, interest rate, and year " << endl;
    cin >> loan >> intrate >> year;

    first.setLoan (loan);
    first.setInterestRate(intrate);
    first.setYear (year);

    cout << "The monthly payment " << first.getPayment() << endl;

    return 0;
}
