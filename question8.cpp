/*Define a class Rectangle and define an instance member function to find the area of the
rectangle.*/
#include<iostream>
using namespace std;
class rectangle
{ int length,breadth;
  int ar;
  public:
    rectangle(int l,int b)
    { length=l;
      breadth=b;
    }
    void area()
    {
        ar=length*breadth;
    }
    void display()
    {
      cout<<"area is "<<ar<<endl;
    }
};
int main()
{ rectangle r(4,8);
    r.area();
    r.display();
 return 0;
}
