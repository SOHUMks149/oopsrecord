// Cpp program to generate Employee slary slip

#include<iostream>
using namespace std;
class employeepay
{
  private:
   int eNo,basicpay,da,hra,epf,gpay,totalded,ptax,netpay;
   string ename,dept,designation,bankno,panno;
 public:
   void getdata()
   {
    cout<<"Enter ename.: ";
    cin>>ename;
    cout<<"Enter eNo: ";
    cin>>eNo;
    cout<<"Enter Basic pay: ";
    cin>>basicpay;
    cout<<"Enter Department: ";
    cin>>dept;
    cout<<"Enter designation : ";
    cin>>designation;
    cout<<"Enrter bankno: ";
    cin>>bankno;
    cout<<"Enter pan no.: ";
    cin>>panno;
   }
   void calculate()
   {
     da=(basicpay)/100*80;
     hra=(basicpay)/100*10;
     gpay=(basicpay+da+hra);
     epf=(basicpay+da)/100*12;
     ptax=(basicpay)/100*2;
     totalded=epf+ptax;
     netpay=gpay=totalded;
   }
   void print()
   {
     cout<<"\n Employee Name: "<<ename;
     cout<<"\n Emplouee Number: "<<eNo;
     cout<<"\n Basic Pay: "<<basicpay;
     cout<<"\n Department: "<<dept;
     cout<<"\n Designationm: "<<designation;
     cout<<"\n Bank No. :" <<bankno;
     cout<<"\n pan No. : "<<panno;
     cout<<"\n Net Pay: "<<netpay;
    }
};
int main()
{
    employeepay p;
    p.getdata();
    p.calculate();
    p.print();
}