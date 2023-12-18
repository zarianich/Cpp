//Program Zad12_3.cpp;
#include <iostream>;
using namespace std;
int main(){
   cout<<"n=";
   int n;
   cin >> n;
   cout<<"=======\n";
   double Min,a;
   for(int i = 1; i<=n; i++){
      cout <<"a["<<i<<"]=";
      cin >> a;
      if(i==1)Min =a;
      else if(Min>a)Min=a;
   }
   cout<<"=======\n";
   cout<<"Min="<<Min<<"\n";
   return 0;
 }
