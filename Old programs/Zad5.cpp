//Program Zad5.cpp
#include <iostream>
#include <iomanip>
using namespace std;
       int main(){
              cout << "a-ot 100 do 999:";
              int a;
              cin >>a;
              short s,d,e;
              s=a/100;
              d=a/10%10;
              e=a%10;
              cout << setw(10) << "stotici:" << setw(5) <<s<<"\n";
              cout << setw(10) << "desetici:" << setw(5) <<d<<"\n";
              cout << setw(10) << "edenici:" << setw(5) <<e<<"\n";
              return 0;
     }
