//Program Zad9.cpp
#include <iostream>
using namespace std;
int main(){
   cout<<"n=";
   int n;
   cin>>n;
   int Factoriel = 1;
   for(int i=1;i<=n;i++)
     Factoriel=Factoriel*i;
   cout<<n<<"!="<<Factoriel<<"\n";
   return 0;
 }
