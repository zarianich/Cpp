///Program Zad13.cpp;
#include <iostream>;
using namespace std;
int main(){
   cout<<"n=";
   int n;
   cin >> n;
   cout<<"=======\n";
   double Max, a, j;
   for(int i = 1; i<=n; i++){
      cout <<"a["<<i<<"]=";
      cin >> a;
      if(i==1){Max =a; j=i;}
      else if(Max<a){Max=a; j=i;}
   }
   cout<<"=======\n";
   cout<<"Max="<<"a["<<j<<"]="<<Max<<"\n";
   return 0;
 }
