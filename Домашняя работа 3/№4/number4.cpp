#include <iostream>
using namespace std;
int main()
{
    int a;
    int max_ch = 1;
    cin >> a;
    while (a != 0)
    {
        if ((a % 2 == 0) && (max_ch != 1))
        {
            max_ch = a;
        }
        else
            if ((a % 2 == 0) && (a > max_ch))
            {
                max_ch = a;
            }
        cin >> a;
    }
    if (max_ch == 1)
        cout << "No";
    else
        cout << max_ch;
}