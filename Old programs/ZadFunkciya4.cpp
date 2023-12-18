//ZadFunkcia.cpp
#include <iostream>
using namespace std;

 double max(double a,double b,double c,double d){
     double max=a;
     if(max<b) max=b;
     if(max<c) max=c;
     if(max<d) max=d;
 return max;
 }
 double min(double a,double b,double c,double d){
     double min=a;
     if(min>b) min=b;
     if(min>c) min=c;
     if(min>d) min=d;
 return min;
 }
 int main()
 {
  double a;
  cout<<"a=";
  cin>>a;
  double b;
  cout<<"b=";
  cin>>b;
  double c;
  cout<<"c=";
  cin>>c;
  double d;
  cout<<"d=";
  cin>>d;
  cout<<"minimalnoto e "<<min(a,b,c,d)<<"\n";
  cout<<"maximalnoto e "<<max(a,b,c,d);
  return 0;
  }
