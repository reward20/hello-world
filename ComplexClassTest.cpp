#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#define PI 3.14159265
using namespace std;

class Math
{
public:
    double real;
    double coml;
    Math(double r,double c)
    {
        real  = r;
        coml = c;
    }
    Math()
    {
        real  = 1;
        coml = 1;
    }
    void operator+ (Math objA)
    {
        coml += objA.coml;
        real  += objA.real;
    }
    void operator- (Math objA)
    {
        coml -= objA.coml;
        real  -= objA.real;
    }
    void operator--()
    {
        coml--;
        real--;
    }
    void operator++(int)
    {
        coml++;
        real++;
    }
        void operator++()
    {
        coml++;
        real++;
    }
    void showAll()
    {
        cout<<real<<'+'<<coml<<"i"<<endl;
    }
    void ShowTrigon()
    {
        double z = sqrt(pow(real,2)+pow(coml,2));
        double f0 = sqrt(pow(real,2)+pow(coml,2));
        double f = coml/f0;
        double f2 = real/f0;
        cout<<z<<"*"<<"("<<f2<<"+"<<f<<"i)"<<endl;
        cout<<"angle: "<<acos(real/f0)*180/PI;
    }
};

int main()
{
    Math objA(5,1);
    objA.showAll();
    objA.ShowTrigon();
    ++objA;
    objA.showAll();
    objA.ShowTrigon();
}
