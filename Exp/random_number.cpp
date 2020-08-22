#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ;i++) ar[i] = value ;
int main()
{
    srand(time(0));            ///assign for randomness
    int r, ar[6] , to = 2, from = 1;
    setV(ar , 0 ,6);
    fflush(stdin);
    printAr(ar);gap
    for(int i = 0; i<6 ; i++)
    {
        r = ((rand()% to) + from) - 1 ;
        ar[i] = r;
        cout<< r <<" ";
        if(i+1%20==0)gap;
    }
    gapp
    cout<<" 0 : "<<ar[0]<<endl;
    cout<<" 1 : "<<ar[1]<<endl;
    cout<<" 2 : "<<ar[2]<<endl;
    cout<<" 3 : "<<ar[3]<<endl;
    cout<<" 4 : "<<ar[4]<<endl;
    cout<<" 5 : "<<ar[5]<<endl;
    return 0;
}
