#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


class ParPip
{
public:
    void operator /(double w)
    {
        height/=w;
    }
    double lenght,width,height;
    ParPip()
    {
        lenght=1;
        width=1;
        height=1;
    }
    ParPip(double n,double t, double i)
    {
        lenght=n;
        width=t;
        height=i;
    }
    double volume()
    {
        return lenght*width*height;
    }
    void showOb()
    {
        cout<<"Parallelepiped has the characteristics of:"<<endl;
        cout<<"lenght: "<<lenght<<endl;
        cout<<"width: "<<width<<endl;
        cout<<"height: "<<height<<endl;
    }
};



class Balk:public ParPip
{
public:
    double mass;
    Balk(double n,double t, double i,double p = 1):ParPip(n,t,i)
    {
        mass = p;
    }
        void showOb()
    {
        cout<<"Balk has the characteristics of:"<<endl;
        cout<<"Lenght: "<<lenght<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Mass: "<<mass<<endl;
    }
    double density()
    {
        return mass/volume();
    }

};

    Balk operator+(Balk objA, Balk objB)
    {
        Balk objC(objA.lenght+objB.lenght,objA.width+objB.width,objA.height+objB.height,objA.mass+objB.mass);
        return objC;
    }


int main()
{
    ParPip objA;
    objA.showOb();
    cout<<"Volume: "<<objA.volume()<<endl;
    Balk objB(20,10,3,200);
    Balk objD(15,20,6,900);
    objB.showOb();
    cout<<"Density: "<<objB.density()<<endl;
    objB/3;
    objB.showOb();
    objD.showOb();
    Balk objC = objB+objD;
    objC.showOb();
    cout<<"volume: "<<objC.volume()<<endl;
    return 0;
}
