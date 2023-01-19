/*Define a class Square to find the square of a number and write a C++ program to Count
number of times a function is called.*/
#include<iostream>
using namespace std;
class square
{ static int count;
    int a,sq;
  public:
     square(int x)
     {
        a=x;
     }
     void findsquare()
     { count++;
       sq=a*a;
     }
     void display()
     {
       cout<<"function called "<<count<<" times"<<endl;
     }
};
int square::count=0;
int main()
{ square a(5);
  square b(3);
   a.findsquare();
   b.findsquare();
   a.display();
 return 0;
}
