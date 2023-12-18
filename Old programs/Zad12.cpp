//Program Zad12.cpp
#include <iostream>
using namespace std;
int main(){
   cout<<"n=";
   int n;
   cin>>n;
   int Nechetni = 0;
   for(int i=1;i<=n;i=i+2)
     Nechetni=Nechetni+i;
   cout<<"Nechetni="<<Nechetni<<"\n";
   return 0;
 }
