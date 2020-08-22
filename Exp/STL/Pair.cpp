
#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
int main()
{
    pair <string,double> product1;                     // default constructor
    pair <string,double> product2 ("tomatoes",2.30);   // value init
    pair <string,double> product3 (product2);          // copy constructor

    product1 = make_pair(string("lightbulbs"),0.99);   // using make_pair (move)

    product2.first = "shoes";                  // the type of first is string
    product2.second = 39.90;                   // the type of second is double

    cout << "The price of " << product1.first << " is $" << product1.second <<endl;
    cout << "The price of " << product2.first << " is $" << product2.second << endl;
    cout << "The price of " << product3.first << " is $" << product3.second << endl;


    pair <int, double> PAIR1 ;
    pair <string, char> PAIR2 ;

    cout << PAIR1.first ;  //it is initialised to 0
    cout << PAIR1.second ; //it is initialised to 0

    gap

    cout << PAIR2.first ;  //it prints nothing i.e NULL
    cout << PAIR2.second ; //it prints nothing i.e NULL


    pair <string, double> PAIR3 ;
    PAIR3 = make_pair ("All the best ",4.56);
    cout << PAIR3.first << " " ;
    cout << PAIR3.second << endl ;

    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);


    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2) << endl;
    cout << (pair1 < pair2) << endl;

    pair<char, int>pair11 = make_pair('A', 1);
    pair<char, int>pair22 = make_pair('B', 2);

    cout << "Before swapping:\n " ;
    cout << "Contents of pair1 = " << pair11.first << " " << pair1.second ;
    gap
    cout << "Contents of pair2 = " << pair22.first << " " << pair2.second ;
    pair1.swap(pair2);



    return 0;
}
