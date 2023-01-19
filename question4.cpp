/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
using namespace std;
class largestnumber
{ int x,y,z;
  int largestnum;
    public:
    largestnumber(int a,int b,int c)
    { x=a;
      y=b;
      z=c;
    }
    void Largestnumber()
    {
       largestnum=(x>y)?((x>z)?x:z):(y>z?y:z);
    }
    void display()
    {
      cout<<"largest number is "<<largestnum<<endl;
    }
};
int main()
{ int a,b,c;
     cout<<"enter three number :";
     cin>>a>>b>>c;
   largestnumber l(a,b,c);
   l.Largestnumber();
   l.display();
 return 0;
}
