//Program ZadMas_1.cpp
#include <iostream>
using namespace std;
int main()
{
 double x[100];
 cout<<"n=";
 int n;
 cin>>n;
 for(int i=0;i<=n-1;i++)
 {
  cout<<"x["<<i<<"]=";
  cin>>x[i];
 }
 for(int i=n-1;i>=0;i--)
  cout<<x[i]<<"\n";
 return 0;
}
