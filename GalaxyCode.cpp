#include <iostream>

using namespace std;


class Planet
{
    int radius;
    int temp;
public:
    string clas;
    Planet * next;
    Planet(int z)
    {
        switch(z)
        {
        case(0):
            clas = "Earth";
            radius = 6000;
            temp = 0;
            break;
        case(1):
            clas = "Gas Giant";
            radius = 60000;
            temp = -120;
            break;
        case(2):
            clas = "Super Earth";
            radius = 60000;
            temp = -120;
            break;
        default:
            clas = "Bladeless";
            radius = 3000;
            temp = -60;
        }
    }
    ~Planet()
    {
        if(next)
        {
            delete next;
        }
    }
};


class Star
{
    public:
    int planet;
    Star * next;
    Planet * nex;
    string color;
    int temp;
    int size;
    void plane(int y)
        {
            planet = y;
            nex = new Planet(rand()%4);
            Planet * net = nex;
            for(int k = 0;k<y;k++)
            {
                net->next = new Planet (rand()%4);
                net=net->next;
            }
            net->next = 0;
        }
public:
    Star(int x, int y)
    {
        switch(x)
        {
        case(1):
            color = "Blue";
            temp = 10000;
            size = 3;
            break;
        case(2):
            color = "Yellow";
            temp = 5000;
            size = 2;
            break;
        case(3):
            color = "Red";
            temp = 3000;
            size = 0;
            break;
        default:
            color = "Dark";
            temp = 0;
            size = -1;
        }
        plane(y);
    }
    void info()
    {
        Star * st = this;
        Planet * nxt = nex;
        while(st)
        {
            nxt=st->nex;
            cout<<"\t"<<st->color<<" star have "<<st->planet<<" planet, type:"<<endl;
            int E=0,G=0,S=0,B=0;
            while(nxt->next)
            {
                            switch(nxt->clas[0])
                            {
                            case( 'E'):
                                E++;
                                break;
                            case('G'):
                                G++;
                                break;
                            case('S'):
                                S++;
                                break;
                            default:
                                B++;
                            }
                            nxt=nxt->next;
            }
            cout<<"Earth - "<<E<<endl;
            cout<<"Gas Giant - "<<G<<endl;
            cout<<"Super Earth - "<<S<<endl;
            cout<<"Bladeless - "<<B<<endl;
            st=st->next;
        }
    }



    ~Star()
    {
        if(next)
        {
            delete nex;
            delete next;
        }
    }

};
template <int n> class Galaxy
{
private:
    Star* gal;
    string name;
public:
    Galaxy(string nam)
    {
        name = nam;
        gal = new Star(rand()%4,rand()%5);
        Star* nex;
        nex = gal;
        for(int k = 0;k<n-1;k++)
        {
            nex->next = new Star(rand()%4,rand()%5);
            nex = nex->next;
        }
        nex->next = 0;
    }
    void info()
    {
        Star* nex = gal;
        int planet = 0;
        {
            int b(0),y=0,d=0,r=0;
            int E=0,G=0,S=0,B=0;
            for (int k = 0; k<n;k++)
            {
                switch(nex->color[0])
                {
                case( 'B'):
                    b++;
                    break;
                case('Y'):
                    y++;
                    break;
                case('R'):
                    r++;
                    break;
                default:
                    d++;
                }
            {
                Planet * t = nex->nex;
                while(1)
                {
                    if(t->next)
                    {
                        switch(t->clas[0])
                        {
                        case( 'E'):
                            E++;
                            break;
                        case('G'):
                            G++;
                            break;
                        case('S'):
                            S++;
                            break;
                        default:
                            B++;
                        }
                        t=t->next;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            planet+= nex->planet;
            nex = nex->next;
        }
        cout<<"Galaxy "<<name<<endl;
        cout<<"In galaxy"<<endl;
        cout<<n<<" star:"<<endl;
        cout<<"Blue - "<< b<<endl;
        cout<<"Yellow - "<< y<<endl;
        cout<<"Red - "<<r<<endl;
        cout<<"Dark Carlic - "<<d<<endl;
        cout<<planet<<" planet:"<<endl;
        cout<<"Earth - "<<E<<endl;
        cout<<"Gas Giant - "<<G<<endl;
        cout<<"Super Earth - "<<S<<endl;
        cout<<"Bladeless - "<<B<<endl;
        cout<<endl;
        gal->info();
        }
    }
    ~Galaxy()
    {
        if(gal->next)
        {
            delete gal->next;
        }

    }
};




int main()
{
    srand(3);
    Galaxy <8> obj("Milky Way");
    obj.info();
    return 0;
}
