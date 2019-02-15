#include <iostream>
#include <fstream>
using namespace std;
int A[1001][1001];
int i,j,n,d;
int main()
{
    ifstream fin ("GRAPH1.INP");
    ofstream fout ("GRAPH1.OUT");
    fin >> n;
    for (i=1; i<=n; i++)
        {
        d = 0;
        for (j=1; j<=n ;j++)
            {
                fin >> A[i][j];
                if (A[i][j]==1) d++;
            }
            fout << d << ' ';
        }
    fin.close();
    fout.close();
    return 0;
}
