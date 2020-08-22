#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 50000
typedef pair<int, int> pii;
vector<pii> graph[MAX];
int dist[MAX];
using namespace std;
void djxt(int s, int t, int n)
{
    int crntN,crntC, nxt, wgt;
    memset(dist,-1,sizeof(dist));
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pii pr;
    pr.first = 0;   ///distance
    pr.second = s;  ///node
    pq.push(pr);
    while(!pq.empty())
    {
        pr = pq.top();
        crntN = pr.second;
        crntC = pr.first;
        pq.pop();

        if(dist[crntN] < 0)
        {
            dist[crntN] = crntC;
            for(int i = 0; i<graph[crntN].size(); i++)
            {
                nxt = graph[crntN][i].first; ///node
                wgt = graph[crntN][i].second; ///cost
                if(dist[nxt] < 0)
                {
                    pq.push(make_pair(dist[crntN]+wgt, nxt));
                }
            }
        }
    }
    if(dist[t] == -1)cout<<"Case #"<<n<<": unreachable" ;
    else cout<<"Case #"<<n<<": "<<dist[t];
    gap;

}
int main()
{
    int i, n, e, u, v, w, s, t, N, N1;
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
        djxt(s,t,  N1 - N);
        for(i = 0; i<n; i++)graph[i].clear();
    }


    return 0;
}
