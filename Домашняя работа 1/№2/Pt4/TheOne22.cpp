#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne22");
    int x, y, n;
    pt >>n >> x >> y;
    switch (n)
    {
    case 1: 
        pt << x + y;
        break;
    case 2: 
        pt << x - y;
        break;
    case 3: 
        pt << x * y;
        break;
    case 4: 
        pt << x / y;
        break;
    case 5: 
        pt << x % y;
        break;
    };
}
