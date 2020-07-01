#include <iostream>
#include <cstdlib>
using namespace std;
double where(int ** m,int size)  /// searches for the arithmetic mean of a double array
{
    double i(0);
    for(int ii = 0; ii < size; ii++)
    {
        for(int nn = 0; nn < size ; nn++)
        {
            i+=m[ii][nn];
        }
    }
    return i/(size*size);
}

int main()
{
    int size = 10;
    int ** m = new int* [size];
    srand(10);
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
    cout<<where(m,size);
    for(int i = 0 ; i < size;i++)
    {
        delete [] m[i];
    }
    delete [] m;
}
