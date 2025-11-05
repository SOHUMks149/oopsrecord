// CPP program to demonstrate friend function

#include<iostream>
using namespace std;
class student
 {
    private:
      int marks;
    public:
      student(int m)
        {
            marks=m;
        }
      friend void showmarks(student s)
      {
        cout<<"marks : "<<s.marks;
      }
 };
 int main()
 {
    student s1(90);
    showmarks(s1);
 }