#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne11");
    float x, y;
    pt >> x >> y;
    pt << ((y >= x) && (x * y >= 0) && (y <= (-x * x) + 1));

}
