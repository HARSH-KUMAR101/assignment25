/*Define a class Factorial and define an instance member function to find the Factorial of a
number using class.*/
#include<iostream>
using namespace std;
class factorial
{ int n,fact;
     public:
     factorial(int x)
     {
       n=x;
     }
     void Factorial()
     { fact=1;
        for(int i=1;i<=n;i++)
        {
           fact=fact*i;
        }
     }
     void display()
     {
       cout<<"factorial of given number is "<<fact<<endl;
     }
};
int main()
{ factorial f(5);
    f.Factorial();
    f.display();
 return 0;
}
