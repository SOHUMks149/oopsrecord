//CPP program to demonstrate multiple inheritance
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
        cout<<"Enter student roll number: ";
        cin>>rno;
    }
    void displaystudent()
    {
        cout<<"Student name: "<<name<<endl;
        cout<<"Student Rollno: "<<rno<<endl;
    }
};
class address
{
   private:
     char city[20];
   public:
     void getaddress()
      {
        cout<<"\n Enter city: ";
        cin>>city;
      }
      void displayaddress()
      {
        cout<<"\n City: "<<city<<endl;
      }
    };
    class account:public student,public address
    {
        private:
          int tfee,submit,balance;
        public:
          void getaccount()
          {
            getstudent();
            getaddress();
            cout<<"total fee: ";
            cin>>tfee;
            cout<<"\n Enter submitted fee: ";
            cin>>submit;
          }
          void displayaccount()
          {
            displaystudent();
            displayaddress();
            cout<<"Total fee: "<<tfee<<endl;
            cout<<"submit fee: "<<submit<<endl;
            balance=tfee-submit;
            cout<<"\n Balance fee: "<<balance; 
          }
    };
    int main()
    {
        account a1;
        a1.getaccount();
        a1.displayaccount();
        getch();
    }

