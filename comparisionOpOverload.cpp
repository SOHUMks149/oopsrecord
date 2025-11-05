#include<iostream>
using namespace std;
class Time
{
    private:
      int hrs,mins,secs;
    public:
      Time()
      {
        hrs=0,mins=0,secs=0;
      }
      Time(int h,int m,int s)
      {
        if(h>0&&h<23&&m>0&&m<=59&&s>0&&s<=59)
        {
            hrs=h;
            mins=m;
            secs=s;
        }
        else
        cout<<"invalid time";
      }
      int operator==(Time t3)
       {
        return(hrs==t3.hrs&&mins==t3.mins&&secs==t3.secs);
       }
};
int main()
{
    Time t1(7,4,30);
    Time t2(3,30,41);
    if(t1==t2)
    cout<<"clock shows same time"<<endl;
    else
    cout<<"clock shows different time"<<endl;
    return 0;
}