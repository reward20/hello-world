#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class MyMoney
{
public:
    string name;
    double money;
    double rate;
    int time;
    MyMoney()
    {
        setAll("",0,0,0);
    }
    MyMoney(string n,double m,double r, int t)
    {
        setAll(n,m,r,t);
    }

    double getMoney()
    {
        double s = money;
        for(int k = 1;k<=time;k++)
        {
            s*=(1+rate/100);
        }
        return s;
    }

    void showAll()
    {
        cout<<"Имя: "<<name<<endl;
        cout<<"Вклад: "<<money<<endl;
        cout<<"Ставка (%): "<<rate<<endl;
        cout<<"Период (лет): "<<time<<endl;
        cout<<"Итоговая сумма: "<<getMoney()<<endl;
        for(int k = 1;k<=35;k++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
     void setAll(string n, double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }
};


class BigMoney: public MyMoney
{
public:
    int period;
    double getMoney()
    {
        double s = money;
        for(int k = 1;k<=time*period;k++)
        {
            s*=(1+rate/100/period);
        }
        return s;
    }
    void showAll()
    {
        cout<<"Имя: "<<name<<endl;
        cout<<"Вклад: "<<money<<endl;
        cout<<"Ставка (%): "<<rate<<endl;
        cout<<"Период (лет): "<<time<<endl;
        cout<<"Начисления в год: "<<period<<endl;
        cout<<"Итоговая сумма: "<<getMoney()<<endl;
    }
    void setAll(string n,double m, double r,int t,int p=1)
    {
        MyMoney::setAll(n,m,r,t);
        period = p;
    }
    BigMoney(string n, double m, double r, int t, int p = 1):
        MyMoney(n,m,r,t)
        {
            period = p;
        }
        BigMoney():MyMoney()
        {
            period = 1;
        }
};




int main()
{
    system("chcp 1251>nul");
    MyMoney objA("Кот Матроскин",1200,7,1);
    BigMoney objB("Дядя Федор",1000,7,6,2);
    BigMoney objC("Пес Шарик",1500,6,8);
    BigMoney objD;
    objD.setAll("Почтальен Печкин",800,10,3,4);
    objA.showAll();
    cout<<endl;
    objB.showAll();
        cout<<endl;
    objC.showAll();
        cout<<endl;
    objD.showAll();
    return 0;
}
