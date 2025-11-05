// Cpp prograsm to demonstrate the unary operator overloading(increment/decrement) opearator
#include<iostream>
using namespace std;
class Complex
{
  private:
    int a,b,c;
  public:
    Complex()
     {

     }
    void getvalue()
     {
       cout<<"Enter the two numbers : ";
       cin>>a>>b;
    }
    void operator++()
    {
      a=++a;
      b=++b;
    }
    void operator--()
    {
      a=--a;
      b=--b;
    }
    void display()
    {
      cout<<a<<"+\t"<<b<<"i"<<endl;
    }
};
int main()
{
 Complex obj;
 obj.getvalue();
 ++obj;
 cout<<"Increment complex Number: ";
 obj.display();
 --obj;
 cout<<"Decrement complex Number: ";
 obj.display();
}