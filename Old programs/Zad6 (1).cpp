//Program Zad6.cpp
#include <iostream>
using namespace std;
       int main(){
              cout << " a= "; double a; cin >>a;
              cout << " b= "; double b; cin >>b;
              cout << " c= "; double c; cin >>c;
              cout << " d= "; double d; cin >>d;
              double max = a;
              if (b > max) max = b;
              if (c > max) max = c;
              if (d > max) max = d;
              cout << "max{" << a << "," <<b<< "," <<c<< "," <<d<< "}=" <<max<< "\n";
              return 0;
         }
