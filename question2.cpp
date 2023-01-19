/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to set
values for time and display values of time.*/
#include<iostream>
using namespace std;
class time
{ int hr,min,sec;
   public:
    time(int h,int m,int s)
    { hr=h;
      min=m;
      sec=s;
    }
    void display()
    {
      cout<<"Time = "<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
};
int main()
{ time t(3,40,32);
   t.display();
 return 0;
}
