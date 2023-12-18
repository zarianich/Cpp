//Program ZadMas_5.cpp
#include <iostream>
using namespace std;
int main()
{
 int a[20];
 cout<<"n=";
 int n;cin>>n;
 int i;

double br=0;
for(i=0;i<=n-1;i++)
 {
  cout<<"a["<<i<<"]=";
  cin>>a[i];
  br=br+a[i];
 }
cout<<"Average = "<<br/n;
return 0;
}
