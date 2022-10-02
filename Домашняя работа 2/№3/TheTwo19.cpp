#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheTwo19");
    int N,NN,n,c=0, i=1,i2=0,maximum=0,n1;
    pt >> N;
    n = N;
    NN = N;
    while (n > 0)
    {
        c++;
        n /= 10;
    }
    while (N > 0)
    {
        n1 = N % 10;
        if (n1 > maximum)
        {
            maximum = n1;
        }
        N /= 10;
        i++;
    }
    while (i2 !=c)
    {
        n1 = NN % 10;
        if (n1 == maximum)
        {
            break;
        }
        NN /= 10;
        i2++;
    }
    pt << maximum << i2+1;
}
