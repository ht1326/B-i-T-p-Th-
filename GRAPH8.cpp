#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector < vector <int> > Ke(100001);
int n, m, Q, i, u, v;
bool CHECK(int U, int V)
{
    int j;
    for (j=0; j<Ke[U].size() && Ke[U][j]!=V; j++);
    if (j<Ke[U].size()) return 1;
    return 0;
}
int main()
{
    ifstream fin ("GRAPH8.INP");
    ofstream fout ("GRAPH8.OUT");
    fin >> n >> m >> Q;
    for (i=1; i<=m ;i++)
    {
        fin >> u >> v;
        Ke[u].push_back(v);
        Ke[v].push_back(u);
    }
    for (i=1; i<=Q; i++)
    {
        fin >> u >> v;
        if (CHECK(u,v)) fout << "YES";
        else fout << "NO";
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
