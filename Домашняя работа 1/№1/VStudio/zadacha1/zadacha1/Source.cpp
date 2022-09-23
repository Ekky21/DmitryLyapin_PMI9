#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    cout << ((y >= x) && (x * y >= 0) && (y <= -x * x + 1));
}