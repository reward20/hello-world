#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#define PI 3.14159265
using namespace std;

class Vect
{
public:
    double x;
    double y;
    Vect()
    {
        x = 0;
        y = 0;
    }
    Vect(int c, int u)
    {
        x=c;
        y=u;
    }
    void operator+ (int u)
    {
        x += u;
        y += u;
    }

    void operator- (int u)
    {
        x-= u;
        y-= u;
    }
    double modul()
    {
        return sqrt(pow(x,2)+pow(y,2));
    }
    Vect operator++ (int)
    {
        x++;
        y++;
        return *this;
    }
    Vect operator++()
    {
        x++;
        y++;
        return *this;
    }
    Vect operator--(int)
    {
        x--;
        y--;
        return *this;
    }
    Vect operator--()
    {
        x--;
        y--;
        return *this;
    }
    Vect operator*(int u)
    {
        x*=u;
        y*=u;
        return *this;
    }
    Vect operator/(int u)
    {
        x/=u;
        y/=u;
        return *this;
    }
    void ShowAll()
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"modul= "<<modul()<<endl;
    }
};
Vect operator+(Vect objA,Vect objB)
{
    Vect objC;
    objC.x = objA.x+objB.x;
    objC.y = objA.y+objB.y;
    return objC;
}
Vect operator-(Vect objA,Vect objB)
{
    Vect objC;
    objC.x = objA.x-objB.x;
    objC.y = objA.y-objB.y;
    return objC;
}

int main()
{
    Vect objA(10,8);
    Vect objB(4,0);
    Vect objC;
    objC = objA*2+objB;
    objC.ShowAll();
}
