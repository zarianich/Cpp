//Program ZadMas_4.cpp
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
 int br=0;
 for(i=0;i<=n-2;i++)
 for(int j=i+1;j<=n-1;j++)
 if(a[i] != a[j])br++;
 if(br==n*(n-1/2))cout<<"povtarya se";
 else cout<<"ne se povtarya";
 return 0;
}
