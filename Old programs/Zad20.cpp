//Program Zad20.cpp
#include <iostream>
using namespace std;
int main(){
   int n,br=0;
   cout<<"n=";
   cin>>n;
   for(int i=2;i<=n-1;i++){
   if(n%i==0) br++;}
    if(br==0) cout<<"Prosto\n";
    if(br>0) cout<<"Ne e prosto\n";

return 0;
}
