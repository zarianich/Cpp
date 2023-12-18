//Program ZadMas_9.cpp
#include <iostream>
using namespace std;
int main()
{
double a[1000],x;
 cout<<"n=";
 int n,i,m;
 cin>>n;
 cout<<"=========\n";
 for(i=0;i<=n-1;i++)
 {
  cout<<"a["<<i<<"]=";
  cin>>a[i];
 }
 for(i=1;i<=n-1;i++)
  {
       for(int j=2;j>=i-1;j++)
       {
          if(a[j+1]<a[j])
          {
              x=a[j+1];
              a[j+1]=a[j];
              a[j]=x;
          }
       }
  }
 cout<<"=========\n";
  for(i=0;i<=n-1;i++)
    cout<<a[i]<<" ";
  cout<<"\n=========\n";
  return 0;
}
