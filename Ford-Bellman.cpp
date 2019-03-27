#include <bits/stdc++.h>
#define oo 1000000000
using namespace std;
int a[205][205], b[205], d[205];
int previous[205];
int main()
{
    int n, m, s, t, u, v, w, i, j, k;
    bool stop;
    ifstream fin ("GRAPH.INP");
    fin >> n >> m >> s >> t;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++) a[i][j]=oo;
        a[i][i]=0;
    }
    for (i=1; i<=m; i++)
    {
        fin >> u >> v >> w;
        a[u][v]=w;
    }
    fin.close();
    ofstream fout ("GRAPH.OUT");
    for (v=1; v<=n; v++)
    {
        d[v]=a[s][v];
        previous[v]=s;
    }
    for (k=1; k<=n-2; k++)
    {
        stop=true;
        for (v=1; v<=n; v++)
            for (u=1; u<=n; u++)
            if (d[u]+a[u][v]<d[v])
            {
                d[v]=d[u]+a[u][v];
                previous[v]=u;
                stop=false;
            }
        if (stop) break;
    }
    if (d[t]<oo)
    {
        fout << d[t] << endl;
        i=b[k=1]=t;
        do
        {
            i=previous[i];
            b[++k]=i;
        } while (i!=previous[i]);
        for (i=k; i>=1; i--) fout << b[i] << ' ';
    } else fout << -1;
    fout.close();
    return 0;
}





/*for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++) fout << a[i][j] << ' ';
        fout << endl;
    }*/
