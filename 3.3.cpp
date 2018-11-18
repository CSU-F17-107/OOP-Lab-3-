#include <iostream>
#include<math.h>
using namespace std;

struct Distance{
    int feet;
    float inch;
  float  metre;
}d1 , d2, m;

int main()
{
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;
m.metre=(d1.feet)*(0.3048);
cout<<"length of feet in meters"<<endl<<m.metre<<endl;
m.metre=(d2.inch)*(0.0254);
cout<<"length of inches in meters"<<endl<<m.metre<<endl;    
  
    
}
