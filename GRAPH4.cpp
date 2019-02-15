#include <iostream>
#include <fstream>
using namespace std;
int U[100001], V[100001];
int n, m, Q, u, v, i, j;
bool KQ;
int main()
{
    ifstream fin ("GRAPH4.INP");
    ofstream fout ("GRAPH4.OUT");
    fin >> n >> m >> Q;
    for (i=1; i<=m; i++) fin >> U[i] >> V[i];
    for (i=1; i<=Q; i++)
    {
        KQ=0;
        fin >> u >> v;
        for (j=1; j<=m; j++)
        if (U[j]==u&&V[j]==v || U[j]==v&&V[j]==u) KQ=1;
        if (KQ) fout << "YES" << endl;
        else fout << "NO" << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
