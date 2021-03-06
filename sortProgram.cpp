#include <iostream>
#include <cstdlib>
using namespace std;
void show(int *m,int n)
{
    for(int i = 0;i<n;i++)
        cout<<m[i]<<" ";
    cout<<endl;
}
void sort(int *m,int size)
{
    for(int y = 0;y<size;y++)
    {
        for(int i = y+1;i<size;i++)
        {
            if(m[y]<m[i])  // ">" or "<" sorts in ascending / descending order
            {
                int f = m[i];
                m[i]=m[y];
                m[y]=f;
                y--;
                break;
            }
        }
    }

}

int main()
{
    const int size = 15;
    int * M = new int [size];
    srand(8);
    for(int i = 0 ; i<size;i++)
    {
        M[i]=rand()%20;
    }
    show(M,size);
    sort(M,size);
    show(M,size);
    delete []M;
    return 0;
}
