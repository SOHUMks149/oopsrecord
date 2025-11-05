//To generate an Electricity Bill
#include<iostream>
using namespace std;
class Ebill
{
 private:
  int custid,units;
  char address[50],name[50];
  float amount;
public:
 void getdata();
 void calculate();
 void print();
};
void Ebill::getdata()
{
 cout<<"Enter customer name: ";
 cin>>name;
 cout<<"Enter customer id : ";
 cin>>custid;
 cout<<"Enter address: ";
 cin>>address;
 cout<<"Enter units: ";
 cin>>units;
}
void Ebill::calculate()
{
if(units<=100)
amount=0;
 else if(units<=200)
 amount=(100*2.25);
  else if(units<=400)
  amount=(100*2.25)+(units-200)*4.25;
   else if(units<=600)
   amount=(100*2.25)+(200*4.25)+(units-400)*6.5;
    else
    amount=(100*2.25)+(200*4.25)+(200*6.5)+(units-600)*9.00;

}
void Ebill::print()
{
 cout<<"------------------------------"<<endl;
 cout<<"       Electricty Bill        "<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"Customer Name    : "<<name<<endl;
 cout<<"Customer id      : "<<custid<<endl;
 cout<<"Customer Address : "<<address<<endl;
 cout<<"UNITS            : "<<units<<endl;
 cout<<"Amount           : "<<amount<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"------------------------------"<<endl;
}
int main()
{
Ebill E;
 E.getdata();
 E.calculate();
 E.print();
}