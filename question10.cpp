/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
using namespace std;
class area
{ public:
    int side,length,breath,radius;
   float area;
     void areaofsquare()
     { area=side*side;
       cout<<"area of square is "<<area<<endl;
     }
     void areaofrect()
     { area=length*breath;
       cout<<"area of rectangle is "<<area<<endl;
     }
     void areaofcircle()
     { area=3.14*radius*radius;
       cout<<"area of circle is "<<area<<endl;
     }

};
int main()
{ area a;
    a.side=4;
    a.length=5;
    a.breath=5;
    a.radius=10;
       a.areaofcircle();
       a.areaofrect();
       a.areaofsquare();
 return 0;
}
