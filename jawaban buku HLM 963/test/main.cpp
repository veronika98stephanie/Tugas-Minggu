#include <iostream>

using namespace std;

class A
{
protected:
    int a;

public :
    int geta()
    {
        return a;
    }
};
class B:protected A
{
protected:
    int b;

public :
    int getb()
    {
        return b;
    }
};
class C:protected B
{
protected:
    int c;

public :
    int getb()
    {
        return c;
    }
};



int main()
{
    C one;
    cout << one.geta();

    cout << "Hello world!" << endl;
    return 0;
}
