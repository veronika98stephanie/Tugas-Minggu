#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class Date
{
    int month;
    int day;
    int year;
public:
    Date();
    Date(int day, int month, int year);
    int getMonth();
    int getDay();
    int getYear();
};


#endif // DATE_H_INCLUDED
