/*Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex number*/
#include<iostream>
using namespace std;
class complexnum
{ int a,b;
   public:
       complexnum(int x,int y)
       { a=x;
         b=y;
       }
     void show()
     {
       cout<<"number = "<<a<<" + i"<<b<<endl;
     }
};
int main()
{ complexnum a(3,4);
    a.show();
 return 0;
}
