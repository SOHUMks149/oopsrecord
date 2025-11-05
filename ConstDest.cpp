//Constructor and destructor
#include<iostream>
using namespace std;
class student
{
  private:
    int roll_no;
    string name;
  public:
    student()
     {
      roll_no=1;
      name="sohum";
     }
    student(int r,string n)
    {
      roll_no=r;
      name=n;
    }
    student(student &s)
    {
      roll_no=s.roll_no;
      name=s.name;
    }
    void display()
    {
      cout<<"Roll no. :"<<roll_no<<endl;
      cout<<"Name :"<<name<<endl;
    }
    ~student()
    {
     cout<<"Destructor has been called."<<endl;
    }
};
 int main()
 {
  student s1;
  student s2(101,"Sara");
  student s3=s2;
  s1.display();
  s2.display();
  s3.display();
 }