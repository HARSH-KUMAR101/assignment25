/*Define a class Circle and define an instance member function to find the area of the
circle.*/
#include<iostream>
using namespace std;
class circle
{ float radius,result;
    public:
       circle(float r)
       {
          radius=r;
       }
       void area()
       {
          result=3.14*radius*radius;
       }
       void display()
       {
         cout<<"area is "<<result<<endl;
       }
};
int main()
{ circle c(5);
    c.area();
    c.display();
 return 0;
}
