#include <iostream>

using namespace std;

class Bentuk{
public:
    Bentuk(){
    cout << " aa ";
    }
    ~Bentuk(){
    cout <<"bb";
    }
};

class Lingkaran : public Bentuk{
public:
    Lingkaran(){
        cout <<"a";
    }
    ~Lingkaran(){
        cout <<"d";
    }
    int HitLuas(){

    }
    void print(){
        cout <<"c";
    }
};

int main(){
    Lingkaran b;
    Bentuk * a = &b;



    return 0;
}
