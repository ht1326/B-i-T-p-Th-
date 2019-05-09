#include <vector>
#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
struct data
{
    int first,w,cost;
    data(int x,int y,int z): first(x),w(y),cost(z) {};
};
int n,k;
int d[1001];
vector <data> ke[1001];
bool operator>(data a,data b)
{
    return a.cost>b.cost;
}
long long int Dijkstra()
{
    int i,u,v,cost,cost1,w,w1;
    for (i=1; i<=n; i++)
    {
        d[i]=1e9;
    }
    priority_queue <data,vector<data>,greater<data> > q;
    q.push(data(1,0,0));
    while (!q.empty())
    {
        u=q.top().first;
        w=q.top().w;
        cost=q.top().cost;
        q.pop();
        if (d[u]>w)
        {
            d[u]=w;
            for (i=0; i<ke[u].size(); i++)
            {
                v=ke[u][i].first;
                w1=ke[u][i].w;
                cost1=ke[u][i].cost;
                if (cost1+cost<=k)
                {
                    q.push(data(v,w+w1,cost+cost1));
                }
            }
        }
    }
    return d[n];
}
int main()
{
    int Test;
    freopen("ROADS.inp","r",stdin);
    scanf("%d",&Test);
    while (Test>0)
    {
        int m,i,u,v,w,cost;
        Test--;
        scanf("%d%d%d",&k,&n,&m);
        for (i=1; i<=n; i++)
            ke[i].clear();
        for (i=1; i<=m; i++)
        {
            scanf("%d%d%d%d",&u,&v,&w,&cost);
            ke[u].push_back(data(v,w,cost));
        }
        v=Dijkstra();
        if (v!=1e9)
            cout <<v<<endl;
        else
            cout <<-1<<endl;
    }
}
