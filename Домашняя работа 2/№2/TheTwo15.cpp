#include "pt4.h"
#include <math.h>
using namespace std;

void Solve()
{
    Task("TheTwo15");
    int n;
    double s=0;
    pt >> n;
    for (float i = 1; i <= n; i++)
    {
        s += pow(i, i - 1) / (i + 1);
    }
    pt << s;
}
