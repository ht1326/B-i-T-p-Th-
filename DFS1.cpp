#include <iostream>
#include <fstream>
using namespace std;
int a[1001][1001];
bool Chuaxet[1001];
int n, dem, i, j;
void DFS (int v)
{
    int u;
    Chuaxet[v]=false;
    for (i=1; i<=n; i++)
        if (Chuaxet[u] && a[u][v]) DFS(u);
}
int main()
{
    ifstream fin ("DFS1.INP");
    fin >> n;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++) fin >> a[i][j];
    fin.close();
    ofstream fout ("DFS1.OU");
    for (i=1; i<=n; i++) Chuaxet[i]=true;
    dem=0;
    for (i=1; i<=n; i++)
        if (Chuaxet[i])
    {
        dem++;
        DFS(i);
    }
    fout << dem;
    fout.close();
    return 0;
}
