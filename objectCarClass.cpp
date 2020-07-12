#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#define PI 3.14159265
using namespace std;

class Car
{
public:
    string name;
    string color;
    double fiel;
    double expenditure;
    Car()
    {
        name = "MuTuSI";
        color = "black";
        fiel = 150.0;
        expenditure =  5.0;
    }
    Car(string nam, string colo,double fie, double expen)
    {
        name = nam;
        color = colo;
        fiel = fie;
        expenditure = expen;
    }
    double distance ()
    {
        return fiel/expenditure*100;
    }
};

class heavyCar:  public Car
{
    public:
    double carrying;
    heavyCar()
    {
        name = "MuTuSI";
        color = "black";
        fiel = 150.0;
        expenditure =  5.0;
        carrying = 10;
    }
    heavyCar(string nam ="MuTuSI",string colo = "black",double fie = 150.0,double expen = 10.0, double carr = 10)
    {
        name = nam;
        color = colo;
        fiel = fie;
        expenditure = expen;
        carrying = carr;
    }
    double price(double priceFiel)
    {
        return expenditure/100*priceFiel/carrying;
    }
};

int main()
{
    Car objA("Mutsibisi","pink", 200, 8);
    cout<<objA.distance()<<endl;
    heavyCar objB("Man","black", 750,25,30);
    cout<<objB.distance()<<endl;
    cout<<objB.price(2.5)<<endl;
}
