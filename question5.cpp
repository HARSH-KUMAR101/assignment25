/*Define a class ReverseNumber and define an instance member function to find Reverse
of a Number using class.*/
#include<iostream>
using namespace std;
class reversenumber
{ int num;
  int reverse;
   public:
      reversenumber(int n)
      {
        num=n;
      }
      void findreverse()
      { reverse=0;
          while(num!=0)
          {
             reverse=reverse*10+num%10;
             num=num/10;
          }
      }
      void display()
      {
        cout<<"reverse of given number is "<<reverse<<endl;
      }
};
int main()
{ int a;
    cout<<"enter a number to get its reverse :";
    cin>>a;
    reversenumber r(a);
    r.findreverse();
    r.display();
return 0;
}

