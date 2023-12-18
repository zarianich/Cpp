//Program Zad12_2.cpp;
#include <iostream>;
using namespace std;
int main(){
   cout<<"n=";
   int n;
   cin >> n;
   cout<<"=======\n";
   double Max,a;
   for(int i = 1; i<=n; i++){
      cout <<"a["<<i<<"]=";
      cin >> a;
      if(i==1)Max =a;
      else if(Max<a)Max=a;
   }
   cout<<"=======\n";
   cout<<"Max="<<Max<<"\n";
   return 0;
 }
