/*Define a class Greatest and define instance member function to find Largest among 3
numbers using classes.*/
#include<iostream>
using namespace std;
class greatest
{ int x,y,z;
  int largestnum;
    public:
    greatest(int a,int b,int c)
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
    greatest l(a,b,c);
   l.Largestnumber();
   l.display();
 return 0;
}
