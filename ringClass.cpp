
#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
using namespace std;

class Vid
{
public:
    int x = 28;
    int z = x;
    char c = 'A';

    Vid * next;
    Vid (Vid &obj)
    {
        obj.next = this;
    }
    Vid()
    {

    }
    ~Vid()
    {
        if(next)
        {
           delete next;
        }
        cout<<"Объект "<<c<<" был удален\n";
    }
    void show()
    {
        if(x)
        {

            x--;
            cout<<" "<<c;
            if(c<(next->c))
            {
                cout<<"\n";
            }
            c++;
            next->show();
        }


    }
};

int main()
{

    system ("chcp 1251>nul");
    Vid * pnt = new Vid;
    Vid * p;
    p=pnt;
    for(int k = 1 ;k<=28;k++)
    {
        p = new Vid(*p);
    }
    p->next = pnt;
    pnt->show();
    p->next = 0;
    delete pnt;
    return 0;
}
