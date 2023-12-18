#include <iostream>
using namespace std;

int stepen(int a,int n){
     int stepen=1;
 for(int i=1;i<=n;i++){
    stepen=stepen*a;
 }
    return stepen;
}

int main() {
 cout<<"a=";
    int a;cin>>a;
 cout<<"n=";
    int n;cin>>n;
 cout<<a<<"^"<<n<<"="<<stepen(a,n);
 return 0;
}
