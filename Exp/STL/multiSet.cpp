#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
using namespace std;

int main()
{

    multiset<int> first;                          // empty multiset of ints
    int myints[]= {10,20,30,20,20};
    multiset<int> second (myints,myints+5);       // pointers used as iterators
    multiset<int> third (second);                 // a copy of second
    multiset<int> fourth (second.begin(), second.end());  // iterator ctor.

    multiset <int, greater <int> > gquiz1;
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50); // 50 will be added again to the multiset unlike set
    gquiz1.insert(10);


    multiset <int, greater <int> > :: iterator itr;
    cout << "\nThe multiset gquiz1 is : ";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout << " " << *itr;
    }
    cout << endl;
    // assigning the elements from gquiz1 to gquiz2
    multiset <int> gquiz2(gquiz1.begin(), gquiz1.end());


    cout << "\nThe multiset gquiz2 after assign from gquiz1 is : ";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)// print all elements of the multiset gquiz2
    {
        cout << " " << *itr;
    }
    cout << endl;

    cout << "\ngquiz2 after removal of elements less than 30 : ";//remove all elements up to element with value 30 in gquiz2
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << " " << *itr;
    }


    int num;// remove all elements with value 50 in gquiz2
    num = gquiz2.erase(50);
    cout << "\ngquiz2.erase(50) : ";
    cout << num << " removed \t" ;
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << " " << *itr;
    }
    cout << endl;

    //lower bound and upper bound for multiset gquiz1
    cout << "gquiz1.lower_bound(40) : "<< *gquiz1.lower_bound(40) << endl;
    cout << "gquiz1.upper_bound(40) : "<< *gquiz1.upper_bound(40) << endl;
    //lower bound and upper bound for multiset gquiz2
    cout << "gquiz2.lower_bound(40) : "<< *gquiz2.lower_bound(40) << endl;
    cout << "gquiz2.upper_bound(40) : "<< *gquiz2.upper_bound(40) << endl;

    return  0;
}
