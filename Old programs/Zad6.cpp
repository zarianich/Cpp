#include <iostream>
using namespace std;
int main() {
    int a,n,m;
    cout<<"a=";
    cin>>a;
    cout<<"n=";
    cin>>n;
    int stepen=1;
    if(n>=0)m=n;
    if(n<0)m=-n;
    for(int i=1;i<=m;i++)
    stepen=stepen*a;
    if(n>=0)cout<<"Rezultata e "<<stepen;
    if(n<0)cout<<"Rezultata e "<<1.0/stepen;
    return 0;
}
