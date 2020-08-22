#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
void printMap(multimap <int, int> gquiz1)
{

    for (auto& x: gquiz1)
    {
        cout<<'\t'<< x.first<<'\t'<< x.second <<endl;
    }
    cout << endl;
}
int main()
{

    multimap <int, int> gquiz1;        // empty multimap container
    gquiz1.insert(pair <int, int> (1, 40));
    gquiz1.insert(pair <int, int> (2, 30));
    gquiz1.insert(pair <int, int> (3, 60));
    gquiz1.insert(pair <int, int> (4, 20));
    gquiz1.insert(pair <int, int> (5, 50));
    gquiz1.insert(pair <int, int> (6, 50));
    gquiz1.insert(pair <int, int> (6, 10));

    // printing multimap gquiz1
    cout << "\nThe multimap gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    printMap(gquiz1);

    // assigning the elements from gquiz1 to gquiz2
    multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end());

    // print all elements of the multimap gquiz2
    cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    printMap(gquiz2);


    // remove all elements up to element with value 30 in gquiz2
    cout << "\ngquiz2 after removal of elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    printMap(gquiz2);


    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    printMap(gquiz2);




    //lower bound and upper bound for multimap gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : " << " KEY = ";
    cout << gquiz1.lower_bound(5)->first << ' ';
    cout << " ELEMENT = " << gquiz1.lower_bound(5)->second << endl;
    cout << "gquiz1.upper_bound(5) : " << " KEY = ";
    cout << gquiz1.upper_bound(5)->first << ' ';
    cout << " ELEMENT = " << gquiz1.upper_bound(5)->second << endl;

    return 0;

}
