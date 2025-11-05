// Cpp program to demonstraste binary operator overloading to add two strings
#include<iostream>
#include<cstring>
using namespace std;
const int sz=90;
class String
{
    private:
      char str[sz];
    public:
      String()
      {
        strcpy(str," ");
      }
      String(const char s[])
      {
        strcpy(str,s);
      }
      void display()
      {
        cout<<str<<"\n";
      }
      String operator +(String ss)
      {
        if (strlen(str) + strlen(ss.str)<sz)
        {
            String temp;
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
            return temp;
        }
        else
        cout<<"string overflow";
        return 0;
      }
    };
    int main()
    {
        String s1="Hello";
        String s2="World";
        String s3;
        s3=s1+s2;
        s1.display();
        s2.display();
        s3.display();
    }