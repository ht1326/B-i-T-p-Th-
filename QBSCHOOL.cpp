#include <bits/stdc++.h>
#define oo 10000000
using namespace std;

long long int d[5005], a[5005][5005];
int visited[5005], pre[5005];

int main()
{
    freopen("QBSCHOOL.INP", "r", stdin);
    freopen("QBSCHOOL.OUT", "w", stdout);

    int n, m, k, u, v, l, i, j;

    cin >> n >> m;
    for (i=1; i<=m; i++)
    {
        cin >> k >> u >> v >> l;
        a[u][v]=l;
        if (k==2) a[v][u]=l;
    }

    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
        if (a[i][j]==0 && i!=j) a[i][j]=oo;

    for (i=1; i<=n; i++)
    {
        d[i]=a[1][i];
        pre[i]=1;
        visited[i]=true;
    }

    d[1]=0;
    d[0]=oo;

    do
    {
        u=0;
        for (v=1; v<=n; v++)
            if (visited[v] && d[v]<d[u]) u=v;
        visited[u]=false;
        if (u>0)
        {
            for (v=1; v<=n; v++)
                if (visited[v] && d[u]+a[u][v]<d[v])
            {
                d[v]=d[u]+a[u][v];
                pre[v]=u;
            }
        }
    } while (u>0);
    cout << d[n];
    return 0;
}
