// student marks details
#include<iostream>
using namespace std;
class student
{
 private:
  int m1,m2,m3,total;
  char register_no[50],name[50];
  float avg;
public:
 void getdata();
 void calculate();
 void print();
};
void student::getdata()
{
 cout<<"Enter student nmae: ";
 cin>>name;
 cout<<"Enter register no. : ";
 cin>>register_no;
 cout<<"Marks 1: ";
 cin>>m1;
 cout<<"Marks 2: ";
 cin>>m2;
 cout<<"Marks 3: ";
 cin>>m3;
}
void student::calculate()
{
 total=m1+m2+m3;
 avg=total/3;
}
void student::print()
{
 cout<<"Name: "<<name<<endl;
 cout<<"Register no: "<<register_no<<endl;
 cout<<"Marks 1: "<<m1<<endl;
 cout<<"Marks 2: "<<m2<<endl;
 cout<<"Marks 3: "<<m3<<endl;
 cout<<"Total: "<<total<<endl;
 cout<<"Average: "<<avg<<endl;
}
int main()
{
 student S;
 S.getdata();
 S.calculate();
 S.print();
}