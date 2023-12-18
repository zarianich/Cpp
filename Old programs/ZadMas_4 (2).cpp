//Program ZadMas_2.cpp
#include <iostream>
using namespace std;
int main()
{
 int a[20];
 cout<<"n=";
 int n;cin>>n;
 int i;
 for(i=0;i<=n-1;i++)
 {
  cout<<"a["<<i<<"]=";
  cin>>a[i];
 }
 int b;
 int br=0;
 for(i=0;i<=n-1;i++){
      b=a[i];
   if(b==a[i])br++;
}
 if(br>0)cout<<"povtarya se";
 else cout<<"ne se povtarya";
 return 0;
}
