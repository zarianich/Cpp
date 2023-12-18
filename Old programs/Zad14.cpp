#include <iostream>;
using namespace std;
int main(){
  int n,a,b,c;
  cout<<"V vedete tricifreno chislo"<<"\n";
  cout<<"n=";
  cin>>n;
  a=n/100;
  b=n%100;
  c=a/10;
  if(a+b+c<100;a+b+c>=10)cout<<"yes "<<a+b+c;
  if(a+b+c>=100;a+b+c<10)cout<<"no "<<a*b*c;
  return 0;
}

