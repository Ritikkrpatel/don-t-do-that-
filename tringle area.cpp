#include<bits/stdc++.h>
using namespace std;
class funda{
public:
double triangle(double x, double y){

double area= .5*x*y;
 cout<< area<<endl;
};


      double inp(){double a,b;
      cout<<"Enter the base length of tringle"<<endl;
      cin>> a;
       cout<<"Enter the height of triangle"<<endl;
      cin>>b;
      cout<<"The area of following given tringle is :"<<endl;
          float surface=a*b*.5*1;
          cout<<surface;
      };



};
int main(){

funda fo;
fo.triangle(0,6);
fo.inp();


return 0;
};
