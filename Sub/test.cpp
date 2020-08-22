#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define gap cout<<"\n";
#define gapp cout<<"\n\n";
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define fr(sz) for(int i =0; i<sz; i++)
#define takein(ar, s) for(int i =0; i<s; i++)cin>>ar[i];
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 10005
#define dicAr ar[1002]
#define lcm(a,b) ((a/__gcd(a,b))*b);
vector<int> edge[MAX];
vector<int> cost[MAX];
int visit[MAX];
int level[MAX];

void bfs(int n, int t)
{
    int visited[MAX], x, y;
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    queue<int> q;
    q.push(t);
    visited[t] = 1;
    while(!q.empty())
    {
        x = q.front();
        q.pop();
        for(int i = 0; i<edge[x].size(); i++)
        {
            y = edge[x][i];
            if(!visited[y])
            {
                q.push(y);
                visited[y] = 1;
                level[y] = level[x] + 6;
            }
        }
    }
    for(int i = 1; i<= n; i++)
    {
        if(i!=t)
        {
            if(level[i] == 0)cout<<"-1";
            else cout<<level[i];
            cout<<" ";
        }
    }
}
void clean(int sz)
{
    fr(sz)edge[i].clear();
}


int main()
{
    int  n,e,h1, h2,t, cs;
    cin>>cs;
    while(cs--)
    {
        cin>> n >> e;
        for(int i = 0; i < e ; i++)
        {
            cin>> h1 >> h2;
            edge[h1].push_back(h2);
            edge[h2].push_back(h1);
        }
        cin>>t;
        bfs(n,t);
        clean(n);
        gap
    }

    return 0;
}

