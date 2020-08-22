#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 50000
vector<pair<int, int>> graph[MAX];
int dist[MAX];
void bfsm(int s, int t, int n)
{
    int  x, y,curr, nxt, wg;
    memset(dist,63,sizeof(dist));
    queue<int> q;

    q.push(s);
    dist[s] = 0;
    while(!q.empty())
    {
        curr = q.front();
        q.pop();
        for(int i = 0; i<graph[curr].size(); i++)
        {
            nxt = graph[curr][i].first;
            wg = graph[curr][i].second;
            if(dist[curr]+wg<dist[nxt])
            {
                q.push(nxt);
                dist[nxt] = 0;
                dist[nxt] = dist[curr] + wg;
            }
        }
    }
    if(dist[t] == 1061109567)cout<<"Case #"<<n<<": unreachable" ;
    else cout<<"Case #"<<n<<": "<<dist[t];
    gap
}
int main()
{
    int i, j, n, e, u, v, w, s, t, N, N1;
    cin>> N;
    N1 = N;
    while( N-- )
    {
        cin>> n >> e >> s >> t;
        for(i = 0; i < e ; i++)
        {
            cin>> u >> v >> w ;
            graph[u].push_back(make_pair(v,w));
            graph[v].push_back(make_pair(u,w));
        }
        /*
        gapp
        for(i = 0; i< n; i++)
        {
            cout<< " Node " << i<< " is connected with- \n";
            u = graph[i].size();
            for(j = 0; j < u; j++ )
            {
                cout<<" "<<graph[i][j].first << " weight: "<<graph[i][j].second;gap
            }
            gap
        }*/
        bfsm(s, t, N1 - N);
        for(int i = 0; i<n; i++)graph[i].clear();
    }
    return 0;
}
