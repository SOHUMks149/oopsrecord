// CPP program to demonsztrate the single inheritance
#include<iostream>
using namespace std;
class student
{
   private:
     string name;
     int rollno;
   public:
     void getstudent()
     {
        cout<<"enter student name: ";
        cin>>name;
        cout<<"enter student roll no: " ;
        cin>>rollno;    
    } 
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollno<<endl;
    }
};
class address:public student
{
    private:
      string city;
    public:
      void getaddress()
      {
        getstudent();
        cout<<"Enter city: ";
        cin>>city;
      }
      void displayaddress()
      {
        display();
        cout<<"City: "<<city;
      }
};
int main()
{
    address a;
    a.getaddress();
    a.displayaddress();
}