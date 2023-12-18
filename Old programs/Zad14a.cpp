//Program Zad14.cpp

#include <iostream>

using namespace std;

int main (){

  cout <<"n=";

  int n;

  cin >> n;

  int fact = 1;

  int i = 1;

  while (i<=n){

      fact = fact * i;

      i++;

  }

  cout <<n<<"!="<<fact<<"\n";

  return 0;

}
