#include <iostream>
#include <fstream>
using namespace std;
int U[1001000], V[1001000];
int n, m, k, i, j;
int main()
{
    ifstream fin ("GRAPH5.INP");
    ofstream fout ("GRAPH5.OUT");
    fin >> n;
    m=0;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            fin >> k;
            if (j > i && k == 1)
            {
                m++;
                U[m]=i;
                V[m]=j;
            }
        }
    }
    fout << n << ' ' << m << endl;
    for (i=1; i<=m; i++) fout << U[i] << ' ' << V[i] << endl;
    fin.close();
    fout.close();
    return 0;
}
