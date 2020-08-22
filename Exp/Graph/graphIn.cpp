#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 1000
vector<int> edge[MAX];
vector<int> cost[MAX];
int visit[MAX];
int level[MAX];

void bfs(int n)
{
    int visited[MAX], x, y;
    memset(visited,0,sizeof(visited));
    queue<int> q;
    q.push(2);
    visited[2] = 1;
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
                level[y] = level[x] + 1;
            }
        }
    }
    for(int i = 1; i<= n; i++)
    {
        cout<<2<<" to "<<i<<"  : "<<level[i];
        gap
    }
}


int main()
{
    int i, j, n ,e ,h1, h2;
    cin>> n >> e;
    for(i = 0; i < e ; i++)
    {
        cin>> h1 >> h2;
        edge[h1].push_back(h2);
        edge[h2].push_back(h1);
    }
    gapp
    for(i = 1; i<= n; i++)
    {
        cout<< " Node " << i<< " is connected with: ";
        h1 = edge[i].size();
        for(j = 0; j < h1; j++ )cout<<edge[i][j] << " ";
        gap
    }
    gapp
    gapp
    //bfs(n);

    return 0;
}

