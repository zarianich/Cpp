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
 int x;
 cout<<"x=";
 cin>>x;
 int br=0;
 for(i=0;i<=n-1;i++)
   if(a[i]==x)br++;
 cout<<"number="<<br<<"\n";
 return 0;
}
