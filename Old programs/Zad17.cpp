#include <iostream>;
using namespace std;
int main(){
  int n,a,b,c,d,e,br,sum;
  cout<<"n=";
  cin>>n;
  a=n/10000; //namirame desetohiladnite
  b=n%10000/1000; //namirame hiladnite
  c=n%1000/100; //namirame stoticite
  d=n%1000%100/10; //namirame deseticite
  e=n%100%10; //namirame edenicite
  cout<<e<<d<<c<<b<<a<<"\n";
  br=0;
  if(a%2==1)br=br+1;
  if(b%2==1)br=br+1;
  if(c%2==1)br=br+1;
  if(d%2==1)br=br+1;
  if(e%2==1)br=br+1;
  cout<<"Broia na nechetnite e "<<br<<"\n";
  sum=0;
  if(a%2==0)sum=sum+a;
  if(b%2==0)sum=sum+b;
  if(c%2==0)sum=sum+c;
  if(d%2==0)sum=sum+d;
  if(e%2==0)sum=sum+e;
  cout<<"Sumata na chetnite e "<<sum;
  return 0;
}
