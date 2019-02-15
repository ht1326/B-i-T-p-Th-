#include <iostream>
#include <fstream>
using namespace std;
int A[1001][1001];
int n, Q, U, V, i, j;
int main()
{
    ifstream fin ("GRAPH3.INP");
    ofstream fout ("GRAPH3.OUT");
    fin >> n >> Q;
    for (i=1; i<=n; i++)
    for (j=1; j<=n; j++) fin >> A[i][j];
    for (i=1; i<=Q; i++)
    {
        fin >> U >> V;
        if (A[U][V] == 1 || A[V][U] == 1) fout << "YES" << endl;
        else
            fout << "NO" << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
