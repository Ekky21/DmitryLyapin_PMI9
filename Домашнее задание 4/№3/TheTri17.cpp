// ƒано два числа в одной системе счислени€. ¬ывести их произведение в этой системе счислени€.
#include "pt4.h"
using namespace std;
int perevod_10(int x, int y)
{
    int count = 0, r = 0;
    do
    {
        int m = x % 10;
        r += pow(y, count) * m;
        count += 1;
        x /= 10;
    } while (x);
    return r;
}
int perevod(int x, int y)
{
    int s = 0, ost;
    int x1 = x, i = 1;
    while (x1)
    {
        ost = x1 % y;
        s += ost * i;
        x1 /= y;
        i *= 10;
    }
    return s;
}
void Solve()
{
    Task("TheTri17");
    int x, y, p,x1,y1,s,s1;
    pt >> x >> y >> p;
    x1 = perevod_10(x, p);
    y1= perevod_10(y, p);
    s = x1 * y1;
    s1 = perevod(s, p);
    pt << s1;  
}
