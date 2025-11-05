//Function Overloading
#include<iostream>
using namespace std;
int area(int side);
int area(int l,int b);
float area(float r);
int main()
{
 cout<<"area of square: ";
 cout<<area(5)<<endl;
 cout<<"Area of rectangle: ";
 cout<<area(5,10)<<endl;
 cout<<"Area of circle:";
 cout<<area(5.5f)<<endl;
 return 0;
}
int area(int side)
{
 return(side*side);
}
int area(int l,int b)
{
 return(l*b);
}
float area(float r)
{
 return(3.14f*r*r);
}