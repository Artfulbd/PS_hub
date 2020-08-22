#include<iostream>
void Swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}

///or,
void Swap2(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
main()
{
    int i=10,j=20;
    int *p=&i,*p2=&j;
   /**std::swap(i,j); ///built in swap function
    std::cout<<i<<" "<<j<<std::endl;*/
    Swap(i,j);
   std::cout<<i<<" "<<j<<std::endl;
   Swap2(i,j);
   std::cout<<i<<" "<<j<<std::endl;

}
