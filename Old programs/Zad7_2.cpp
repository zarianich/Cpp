//Program Zad7_2.cpp
#include <iostream>
using namespace std;
int main(){
       cout<<"a="; double a; cin>>a;
       cout<<"b="; double b; cin>>b;
       cout<<"c="; double c; cin>>c;
       cout<<"d="; double d; cin>>d;
       if (b>a){double x=a;a=b;b=x;}
       if (c>a){double x=c;c=a;a=x;}
       if (d>a){double x=d;d=a;a=x;}
       if (c>b){double x=b;b=c;c=x;}
       if (d>b){double x=d;d=b;b=x;}
       if (d>c){double x=c;c=d;d=x;}
       cout <<"Podredeni po golemina:"<<a<<"==>"<<b<<"==>"<<c<<"==>"<<d<<"\n";
       return 0;
   }
