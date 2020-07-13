#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#define PI 3.14159265
using namespace std;

class MyClass
{
public:
   char code;
   MyClass*next;
   ~MyClass()
   {
       cout<<"Объект с полем "<<code<<" удален\n";
   }
   void show()
   {
       cout<<code<<" ";
       if(next)
       {
           next->show();
       }
   }
};

void deleteAll(MyClass* q)
{
    if(q->next)
    {
        deleteAll(q->next);
    }
    delete q;
}

int main()
{
    system("chcp 1251>nul");
    int n = 10;
    MyClass* pnt = new MyClass;
    pnt->code='A';
    MyClass *p;
    p=pnt;
    for(int k = 1;k<=n;k++)
    {
        p->next=new MyClass;
        p->next->code=p->code+1;
        p=p->next;
    }
    p->next=0;
    pnt->show();
    cout<<endl;
    deleteAll(pnt);
}
