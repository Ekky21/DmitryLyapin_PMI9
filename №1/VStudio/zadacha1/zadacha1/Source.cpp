#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    if ((y >= x) && (x * y >= 0) && (y <= -x * x + 1)) {
        cout << true;
    }
    else {
        cout << false;
    };
}