//Program Zad7.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
       cout<<"a="; double a; cin>>a;
       cout<<"b="; double b; cin>>b;
       cout<<"c="; double c; cin>>c;
       if (b<a){double x=a;a=b;b=x;}
       if (c<a){double x=c;c=a;a=x;}
       if (c<b){double x=c;c=b;b=x;}
       cout <<"Podredeni po golemina:"<<a<<"==>"<<b<<"==>"<<c<<"\n";
       return 0;
   }
