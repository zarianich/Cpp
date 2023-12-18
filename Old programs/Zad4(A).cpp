//Program Zad4.cpp
#include <iostream>
using namespace std;
       int main(){
              cout << "a=";
              double a;
              cin >> a;
              cout << "b=";
              double b;
              cin >> b;
              double x;
              x=a;
              a=b;
              b=x;
              cout << "a=" <<a<< "\n";
              cout << "b=" <<b<< "\n";
              return 0;
        }
