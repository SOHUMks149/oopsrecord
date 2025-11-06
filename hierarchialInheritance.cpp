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
        cout<<"enter student name :";
        cin>>name;
        cout<<"enter student rollno :";
        cin>>rollno;
    }
    void displaystudent()
    {
        cout<<"student  name :    "<<name<<endl;
        cout<<"student rollno :"<<rollno<<endl;
    }
};
class bsc:public student
{
    private:
    int mat,chem,phy;
    public:
    void getbsc()
    {
        getstudent();
        cout<<"enter maths marks :";
        cin>> mat;
        cout<<"enter chemistry marks :";
        cin>>chem;
        cout<<"enter physics marks :";
        cin>>phy;
    }
    void displaybsc()
    {
        displaystudent();
        cout<<"maths :" <<mat<<endl;
        cout<<"chemistry  :"<<chem<<endl;
        cout<<"physics  :"<<phy<<endl;
    }
};
class ba:public student
{
    private:
    int hindi,punjabi;
    public:
    void getba()
    {
        getstudent();
        cout<<"enter hindi marks :";
        cin>> hindi;
        cout<<"enter punjabi marks :";
        cin>>punjabi;
        
    }
    void displayba()
    {
        displaystudent();
        cout<<"hindi :" <<hindi<<endl;
        cout<<"punjabi  :"<<punjabi<<endl;
        
    }
};
int main()
{
    bsc b1;
    ba b2;
    b1.getbsc();
    b1.displaybsc();

    b2.getba();
    b2.displayba();
}
