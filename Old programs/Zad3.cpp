#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"n=";
    cin>>n;
    int proiz=1;
    for(int i=1;i<=n;i++){
    proiz=proiz*i;
    }
    cout<<"Ot "<<" 1 "<<" Do "<< n <<" Proizvedenieto e "<<"= "<< proiz <<"\n";
return 0;
}
