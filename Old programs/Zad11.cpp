//Program Zad11.cpp
#include <iostream>
using namespace std;
int main(){
   cout<<"n=";
   int n;
   cin>>n;
   int Chetni = 0;
   for(int i=2;i<=n;i=i+2)
     Chetni=Chetni+i;
   cout<<"Chetni="<<Chetni<<"\n";
   return 0;
 }
