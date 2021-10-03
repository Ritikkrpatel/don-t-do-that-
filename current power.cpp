#include<bits/stdc++.h>
using namespace std;
class funda{


public:
 int  called(){
string x;
cout<<"which type of data you have:(VI,IR,VR)" <<endl;
cin>>x;

double v,i,r;
if (x=="VI"){

cout<<"Enter the value of voltage : "<<endl;
    cin>>v;
    cout<<"Enter the value of current : "<<endl;
    cin>> i;

    double power=v*i;
    cout<<"The power is in this type of ckt :"<<power<< " watt."<<endl;
 };
  if(x=="IR"){
    cout<<"Enter the value of resistance : "<<endl;
    cin>>r;
    cout<<"Enter the value of current : "<<endl;
    cin>> i;

    double power=r*i*i;
    cout<<"The power is in this type of ckt :"<<power<<" watt."<<endl;};
    if (x=="VR"){
    cout<<"Enter the value of voltage in the term of volt : "<<endl;
    cin>>v;
    cout<<"Enter the value of resistance in the term of ohm : "<<endl;
    cin>> r;

    double power=v*v/r ;
    cout<<"The power is in this type of ckt :"<<power<<" watt"<<endl;
    };

 };

};
int main(){
funda fo;
fo.called();


return 0;

};

