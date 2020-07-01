#include <iostream>
#include <cstdlib>
using namespace std;
int* where(int ** m,int size)  /// searches for the largest number in a double array
{
    int i(0),n(0);
    for(int ii = 0; ii < size; ii++)
    {
        for(int nn = 0; nn < size ; nn++)
        {
            if(m[ii][nn] > m[i][n])
            {
                i=ii;
                n=nn;
            }
        }
    }
    return m[i]+n;
}

int main()
{
    int size = 10;
    int ** m = new int* [size];
    for(int i = 0;i<size;i++)
    {
        m[i] = new int [size];
    }
    for(int i=0;i<size;i++)
    {
        for(int y = 0;y<size;y++)
        {
            m[i][y]=rand()%20;
            printf("%2i ",m[i][y]);
        }
        cout<<endl;
    }
    cout<<*where(m,size);
    for(int i = 0 ; i < size;i++)
    {
        delete [] m[i];
    }
    delete [] m;
}
