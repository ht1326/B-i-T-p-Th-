#include <iostream>
#include <fstream>
using namespace std;
int A[1001][1001];
int n, m, U, V, i, j;
int main()
{
    ifstream fin ("GRAPH6.INP");
    ofstream fout ("GRAPH6.OUT");
    fin >> n >> m;
    for (i=1; i<=m; i++)
    {
        fin >> U >> V;
        A[U][V]=A[V][U]=1;
    }
    fout << n << endl;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++) fout << A[i][j] << ' ';
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
