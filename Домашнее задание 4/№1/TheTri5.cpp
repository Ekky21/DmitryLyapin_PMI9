// Считать файл, в котором первая строка - кол-во отрезков,
// в следующих сроках 4 значения - координаты вершин отрезка, вывести
// координаты отрезка, наибольшей длины.
#include <fstream>
#include "pt4.h"
using namespace std;
int len(int x1, int y1, int x2, int y2)
{
    return (sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)));
}
void Solve()
{
    Task("TheTri5");
    int a, x1, x2, y1, y2,x1m,y1m,x2m,y2m;
    int mx = -10000000;
    ifstream f;
    f.open("e.otr");
    f >> a;
    for (int i = 0; i <= a; i++)
    {
        f >> x1;
        f >> y1;
        f >> x2;
        f >> y2;
        if (len(x1,y1,x2,y2)>mx)
        {
            x1m = x1;
            y1m = y1;
            x2m = x2;
            y2m = y2;
            mx = len(x1, y1, x2, y2);
        }
    }
    f.close();
    pt << x1m << y1m << x2m << y2m;
}
