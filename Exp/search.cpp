#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
int upper_bound(int ar[], int n, int sz)
{
    int l = 0, h = sz - 1, mid;
    while(l <= h)
    {
        mid = l + (h - l)/2;
        if(n < ar[mid])h = mid - 1;
        else l = mid + 1;
    }
    return l;
}
int lower_boundd(int ar[], int n, int sz)
{
    int l = 0, h = sz - 1, mid;
    while(l <= h)
    {
        mid = l + (h - l)/2;
        if(n <= ar[mid])h = mid - 1;
        else l = mid + 1;
    }
    return l;
}
int main()
{
    srand(time(0));
    int r, ar[7] = {21 ,22 ,26 ,28 ,33 ,35 ,37}, to = 0, from = 7;
    //setV(ar , 0 ,7);
    //for(int i = 1; i<201 ; i++)ar[rand()% from + to]++;   /// random value;
    //sort(ar,ar+7);
    printAr(ar);
    gap
    int f;
    cin>>f;
    if(f == *find(ar,ar+7,f))
    {
        cout<<" UpperBound: "<<upper_bound(ar,f,7)<<" Values are smaller then(including) "<<f<<endl;
        cout<<" LowerBound: "<<lower_boundd(ar,f,7)<<" Values are smaller then "<<f<<endl;


    }
    else
    {
        cout<< "Not found.!!\n";
        cout<<" UpperBound: "<<upper_bound(ar,f,7)<<" Values are smaller then(including) "<<f<<endl;
        cout<<" LowerBound: "<<lower_boundd(ar,f,7)<<" Values are smaller then "<<f<<endl;
    }
    gap
    int *p = upper_bound(ar,ar+7,f);
    cout<<*p;
    gap
    p = lower_bound(ar,ar+7,f);
    cout<<*p;
    gapp
    return 0;
}

