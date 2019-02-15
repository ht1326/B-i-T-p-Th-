#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
vector < vector <int> > Ke(100001);
bool Chuaxet[1001];
int n, m, dem, i, j;
void DFS (int v)
{
    int u, i;
    Chuaxet[v]=false;
    for (i=0; i<Ke[v].size(); i++)
    {
        u=Ke[v][i];
        if (Chuaxet[u]) DFS(u);
    }
}
int main()
{
    ifstream fin ("DFS1.INP");
    fin >> n >> m;
    for (i=1; i<=m; i++)
    {
        int u, v;
        fin >> u >> v;
        Ke[u].push_back(v);
        Ke[v].push_back(u);
    }
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

