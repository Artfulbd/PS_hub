#include<bits/stdc++.h>           /// have some problem, fix that
using namespace std;
#define gap cout<<"\n";
#define gapp cout<<"\n\n";
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define takein(ar, s) for(int i =0; i<s; i++)cin>>ar[i];
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 200005
#define dicAr ar[1002]
string s1, s2;
int ln1, ln2, sub = 0, hld1, hld2;
int lcs(int i, int j)
{
    if(i == ln1 || j == ln2)return 0;
    if(s1[i] == s2[j])
    {
        sub = max( max(1 +lcs(i+1,j+1), lcs(i, j+1)) ,lcs(i+1, j) );
    }
    hld1 =  lcs(i, j+1);
    hld2 = lcs(i+1, j);

    sub = max(hld1, hld2);;
    return sub;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2;
    ln1 = s1.length();
    ln2 = s2.length();
    cout<<lcs(0,0);



    return 0;
}

