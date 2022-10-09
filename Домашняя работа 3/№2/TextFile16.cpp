#include "pt4.h"
#include <math.h>
#include <fstream>
using namespace std;

void Solve()
{
    Task("TextFile16");
    int n, a,summa=0,summa_modul=0;
    double summa_step=0;
    ifstream fin;
    fin.open("a.txt");
    fin >> a;
    while (!fin.eof())
    {
        fin >> n;
        summa += n;
        summa_modul += abs(n);
        summa_step += pow(n, -1);
    }
    fin.close();
    pt << ((summa == summa_modul)&&(summa_step<1));
    
}
