#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 200005
int visit[MAX];
vector<int> graph[MAX];
void dfs(int n)
{
    visit[n] = 1;
    for(int v, i = 0; i< graph[n].size(); i++)
    {
        v = graph[n][i];
        if(!visit[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n, e, u,v, c = 0;
    cin>>n>>e;
    for(int i = 0; i<e ; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1; i<=n ;i++)
    {
        if(!visit[i])
        {
            visit[i] = 1;
            dfs(i);
            c++;
        }
    }
    cout<<c;

    return 0;
}
