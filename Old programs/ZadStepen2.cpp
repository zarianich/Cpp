#include <iostream>
using namespace std;
double stepen(int a,int n){
     double stepen=1;
     int m=n;
    if(n<0)m=-n;
 for(int i=1;i<=m;i++){
    stepen=stepen*a;
 }
 if(n<0) stepen=1/stepen;
 return stepen;
}
int main() {
 cout<<"a=";
    int a;cin>>a;
 cout<<"n=";
    int n;cin>>n;
    cout<<a<<"^"<<n<<"="<<stepen(a,n)<<"\n";
 return 0;
}
