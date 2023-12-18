//ZadFunkcia4.cpp
#include <iostream>
using namespace std;
void min_max(double m){
    double a, b,c;
    for(int i=1;i<=m;i++){
    cout<<"a["<<i<<"]=";
    cin>>a;
    if(i==1) {b=a; c=a;}
    else {if(b>a) b=a;
          if(c<a) c=a;
    }
  }
  cout<<"minimalnoto e "<<b<<"\n";
  cout<<"maximalnoto e "<<c;
 }

 int main()
 {
  double n;
  cout<<"n=";
  cin>>n;
  min_max(n);
  return 0;
  }
