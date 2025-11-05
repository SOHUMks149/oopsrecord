//Inline function
#include<iostream>
using namespace std;
inline int add(int a,int b)
{
 return a+b;
}
inline int product(int a, int b)
{
 return a*b;
}
inline int divide(int a,int b)
{
 return a/b;
}
inline int sub(int a,int b)
{
 return a-b;
}
int main()
{
 int a=20,b=10;
 int a2,a3,a4;
 a2=product(a,b);
 a3=divide(a,b);
 a4=sub(a,b);
 cout<<"Sum is:"<<add(a,b)<<endl;
 cout<<"Product is: "<<a<<endl;
 cout<<"Quotient is :"<<a3<<endl;
 cout<<"Difference is :"<<a4<<endl;
 return 0;
}
