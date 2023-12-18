//Program Zad18.cpp
#include <iostream>
using namespace std;
int main(){
    cout <<"m=";int m; cin >> m;
    cout <<"n=";int n; cin >> n;
    int x;
    if(m>n){
       x = m;
       m = n;
       n = x;
    }
    int proiz = 1;
    int i = m;
    do{
        if(i%2==0)proiz = proiz * i;
        i++;}
        while (i <= n);
    cout <<"========\n";
    cout <<"Proizvedenie=" <<proiz<<"\n";
    return 0;
}
