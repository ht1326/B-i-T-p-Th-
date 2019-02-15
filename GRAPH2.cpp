#include <iostream>
#include <fstream>
using namespace std;
int Bac[100005];
int n, m, U, V, i;
int main()
{
    ifstream fin ("GRAPH2.INP");
    ofstream fout ("GRAPH2.OUT");
    fin >> n >> m;
    for (i=1; i<=m; i++)
    {
        fin >> U >> V;
        Bac[U]++;
        Bac[V]++;
    }
    for (i=1; i<=n; i++) fout << Bac[i] << ' ';
    fin.close();
    fout.close();
    return 0;
}
