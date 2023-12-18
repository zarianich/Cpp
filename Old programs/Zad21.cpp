//Program Zad21.cpp

#include <iostream>

using namespace std;

int main() {

    int n,br,broi=0;

    cout <<"n=";

    cin>>n;

    if(n<2)cout<<"Niama prosti 4isla"<<"\n";

    else {

        for(int j=2;j<=n;j++){

            br=0;

            for(int i=2;i<=j-1;i++){

                if(j%i==0)br++;

            }

            if(br==0){

                cout<< j <<",";

                broi++;

            }

           }

           cout<<"broi="<<broi<<"\n";

    }

    return 0;

}
