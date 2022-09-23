#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int kol = 0, n, i = 1, r = 100000;
    cin >> n;
    while (i != 7)
    {
        if (((n / r % 2 == 0) && (i % 2 == 0)) || ((n / r % 2 != 0) && (i % 2 != 0)))
        {
            kol += 1;
        }
        i += 1;
        r /= 10;
    }
    if (kol == 6)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

}
