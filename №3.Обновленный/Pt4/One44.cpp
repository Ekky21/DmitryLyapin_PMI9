#include "pt4.h"
using namespace std;

void Solve()
{
    Task("One44");
    int kol = 0, n, i = 1, r = 100000;
    pt >> n;
    while (i != 7)
    {
        if (((n / r % 2 == 0) && (i % 2 == 0)) || ((n / r % 2 != 0) && (i % 2 != 0)))
        {
            kol += 1;
        }
        i += 1;
        r /= 10;
    }
    pt << (kol == 6);
}
