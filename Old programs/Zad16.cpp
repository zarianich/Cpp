#include <iostream>;
using namespace std;
int main(){
  int n,a,b,c,d;
  cout<<"n=";
  cin>>n;
  a=n/1000; //namirame hiladnite
  b=n%1000/100; //namirame stoticite
  c=n%1000%100/10; //namirame deseticite
  d=n%100%10; //namirame edenicite
  cout<<d<<c<<b<<a<<"\n";
  cout<<"Sumata e "<<a+b+c+d<<"\n";
  cout<<"Proizvedenieto e "<<a*b*c*d;
  return 0;
}
