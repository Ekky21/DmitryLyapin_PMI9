// Среди отрезка [A;B] найти числа палиндромы, которые также при возведении в квадрат будут палиндромами.
#include "pt4.h"
int kolvociphr(int x)
{
    int c = 0;
    while (x > 0)
    {
        x /= 10;
        c += 1;
    }
    return c;
}
int pal(int x)
{
    float p = 0;
    int c = kolvociphr(x);
    int pal = x;
    while (x != 0)
    {
        p += (x % 10) * pow(10, c);
        x /= 10;
        c--;
    }
    p = p / 10;
    return (p == pal);
}
void Solve()
{ 
    Task("TheTri9");
    int a, b, tr=0;
    pt >> a >> b;
    for (a; a <= b; a++)
    {
        if (pal(a)&&pal(a*a))
        {
            pt << a;
            tr = 1;
        }
    }
    if (tr != 1) pt << "No solution";
}
