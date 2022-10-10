// Найдите K чисел Фибоначчи, больших N, но при этом наиболее близких к N. Ответ записать в файл c.tst, по одному числу в строке.
#include "pt4.h"
#include <fstream>
using namespace std;
long long fib(short N)
{
    long long a = 0;
    long long b = 1;
    if (N >= 0)    
    {
        for (int i = 0; i < N; i++)
        {
            a = a + b;
            b = a - b;
        }
    }
    return a;
}
void Solve()
{
    Task("TextFile3");
    int N, K, x = 1,i=0;
    ofstream file;
    file.open("c.tst"); //fout // file.close()
    pt >> N >> K;
    while (i != K)
    {
        if (fib(x) > N)
        {
            file << fib(x)<< endl;
            i++;
        }
        x++;
    }


}
