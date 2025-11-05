//Object as function arguement
#include<iostream>
using namespace std;
class Time
{
  private:
   int hours,mins;
  public:
   void getTime();
   void addTime(Time x,Time y);
   void displayTime();
};
void Time::getTime()
{
  cout<<"Enter the hours: ";
  cin>>hours;
  cout<<"Enter the mins:";
  cin>>mins;
}
void Time::addTime(Time x,Time y)
{
  mins=x.mins+y.mins;
  hours=mins/60;
  mins=mins%60;
  hours=hours+x.hours+y.hours;
}
void Time::displayTime()
{
  cout<<"Hours: "<<hours;
  cout<<" , Minutes:"<<mins<<endl;
}
int main()
{
  Time T1,T2,T3;
  T1.getTime();
  T2.getTime();
  T3.addTime(T1,T2);
  T1.displayTime();
  T2.displayTime();
  T3.displayTime();
}