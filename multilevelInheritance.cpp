//CPP program to demonstrate multilevl inheritance
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class student
{
    private:
      char name[20];
      int rno;
    public:
      void getstudent()
      {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"enter Roll no: ";
        cin>>rno;
      }
      void displaystudent()
     {
        cout<<"Student name: "<<name<<endl;
        cout<<"Student roll no: "<<rno<<endl; 
     }
};
class test:public student
{
  protected:
    int math,eng,sci;
  public:
    void gettest()
    {
        getstudent();
        cout<<"Enter math marks: ";
        cin>>math;
        cout<<"Enter science marks: ";
        cin>>sci;
        cout<<"Enter english marks: ";
        cin>>eng;
    }
    void displaytest()
    {
        displaystudent();
        cout<<"\n maths marks: "<<math<<endl;
        cout<<"English marks: "<<eng<<endl;
        cout<<"science marks: "<<sci<<endl;
    }
};
class result: public test{
    private:
      int total,avg;
    public:
      void getresult()
      {
        gettest();
        total=math+eng+sci;
        avg=total/3;
      }
      void displayresult()
      {
        displaytest();
        cout<<"\nTotal marks: "<<total;
        cout<<"\n average marks: "<<avg;
      }
};