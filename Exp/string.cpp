
#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;

int main()
{
   int a = 213;         ///value to string
   stringstream st;
   st<<a;
   string s;
   st>>s;
   s+=" done";
   cout<<s;

   gapp               ///string to value
   string s1 = "1234", c1 = "asdflkjgh";
   stringstream st1;
   st1<<s1;
   st1>>a;
   ++a;
   cout<<a;

   cout<<endl<<"SUB: "<<c1.substr(0,3)<<endl;   /// symbol--->  variable_name.substr(from,how much)->(type string), it starts form 0.s
            /// if i want to print from position 3 to till end, i will write only--> cl.substr(3)
    c1="sleeps";
    cout<<c1.find("p")<<endl;            /// symbol---> variable_name.find("what to find")->(returns index)
    c1.erase(4);
    cout<<c1;

   return 0;
}
