#include<bits/stdc++.h>
using namespace std;
#define gap cout<<"\n";
#define gapp cout<<"\n\n";
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define takein(ar, s) for(int i =0; i<s; i++)cin>>ar[i];
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 200005
#define dicAr ar[1002]
set<string> m;
set< string> :: iterator itr;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("output.txt","w",stdout);
    string s, h;
    int i ;
    while(cin>>s)
    {
        h = "";
        i = 0;
        while(s[i])
        {
            if(isalpha(s[i])) h+=tolower(s[i]);
            else
            {
                if(h != "")m.insert(h);
                h="";
            }
            i++;
        }
        if(h != "")m.insert(h);

    }
    for(auto hold: m) cout<< hold << endl;
    return 0;
}
