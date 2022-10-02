#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheTwo9");
    int n, x, s;
    pt >> n >> x;
    s = x;
    for (int i = 2; i <= n; i++)
    {
        s += x + i;
        x = x + i;   
    }
    pt <<x<< s;
}
