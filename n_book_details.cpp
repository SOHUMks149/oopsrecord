//To print n book details 
#include<iostream>
using namespace std;
class Book
{
    private:
     int accno,pages;
     char authorname[50],bookname[50],ISBNO[50];
     float price;
    public:
     void getdata();          /*function delarations*/
     void print();
};
void Book::getdata()
  {
    cout<<"Enter Book Name: ";
    cin >>bookname;
    cout<<"Enter Author Name: ";
    cin >>authorname ;
    cout<<"Enter ACC NO. : ";
    cin >>accno;
    cout<<"Enter no. of pages: ";
    cin>>pages;
    cout<<"Enter ISBNO.: ";
    cin>>ISBNO;
    cout<<"Enter the price: ";
  }
 void Book::print()
 {
   cout<<"\n ------- Book Details ------- ";
   cout<<"\n Book Name  : "<<bookname;
   cout<<"\n Author Name: "<<authorname;
   cout<<"\n Pages      :  "<<pages;
   cout<<"\n Acc No.    : "<<accno;
   cout<<"\n ISBNO      : "<<ISBNO;
   cout<<"\n Price      : "<<price<<endl;
   cout<<"----------------------------- \n";

 }
  int main()
  {
    Book B[50];
    int i,n;
    cout<<"\n Enter no. of books: ";
    cin>>n;
    for(i=0;i<n;i++)
     B[i].getdata();
    for(i=0;i<n;i++)
     B[i].print();
  }
