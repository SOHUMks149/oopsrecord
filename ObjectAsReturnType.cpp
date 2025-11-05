//Object as return type
#include<iostream>
using namespace std;
class Complex
{
  private:
    float real,imag;
  public:
    Complex(float r=0,float i=0)   //default incase no value is given in main beside object
    {
      real=r;
      imag=i;
    }
    Complex add(Complex c)
    {
      Complex temp;
      temp.real=real+c.real;
      temp.imag=imag+c.imag;
      return temp;
    }
void display()
{
  cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
    Complex c1(3,2),c2(1,7),c3;
    c3=c1.add(c2);   //c1.real+c2.real
    cout<<"1st complex no. : ";
    c1.display();
    cout<<"2nd Complex no. : ";
    c2.display();
    cout<<"sum: ";
    c3.display();
    return 0;
}