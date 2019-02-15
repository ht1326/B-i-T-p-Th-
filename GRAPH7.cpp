#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
vector < vector<int> > Ke(1001);
int n, k, i, j;
int main()
{
    ifstream fin ("GRAPH7.INP");
    fin >> n;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
    {
        fin >> k;
        if (k==1) Ke[i].push_back(j);
    }
    fin.close();
    ofstream fout ("GRAPH7.OUT");
    for (i=1; i<=n; i++)
    {
        fout << Ke[i].size() << ' ';
        for (j=0; j<Ke[i].size(); j++) fout << Ke[i][j] << ' ';
        fout << endl;
    }
    fout.close();
    return 0;
}
