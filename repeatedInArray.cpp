#include <iostream>
#include <cstdlib>
using namespace std;
int where(char ** m,int size,char it)  /// Returns the number of character repetitions in the array
{
    int i(0);
    for(int ii = 0; ii < size; ii++)
    {
        for(int nn = 0; nn < size ; nn++)
        {
            if(it==m[ii][nn])
                i++;
        }
    }
    return i;
}

int main()
{
    int size = 10;
    char ** m = new char* [size];
    srand(10);
    for(int i = 0;i<size;i++)
    {
        m[i] = new char [size];
    }
    for(int i=0;i<size;i++)
    {
        for(int y = 0;y<size;y++)
        {
            m[i][y]='A'+rand()%23;
            printf("%2c ",m[i][y]);
        }
        cout<<endl;
    }
    char t = 'A'+rand()%23;
    cout<<t<<" is repeated " <<where(m,size,t)<<"  times in the array";
    for(int i = 0 ; i < size;i++)
    {
        delete [] m[i];
    }
    delete [] m;
}
