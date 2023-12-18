#include <iostream>;
using namespace std;
int main(){
  int n,a,b,c;
  cout<<"n=";
  cin>>n;
  a=n/100; //namirame stoticite
  b=n%100/10; //namirame deseticite
  c=n%100%10; //namirame edenicite
 /* cout<<"edenici="<<c<<"\n";
  cout<<"desetici="<<b<<"\n";
  cout<<"stotici="<<a<<"\n";*/
  cout<<c<<b<<a;
  return 0;
}
