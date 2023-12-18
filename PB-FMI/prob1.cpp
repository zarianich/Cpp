#include <iostream>

using namespace std;

int main(){

int n, k;
bool existAB = false;

cout << "Enter N: ";
cin >> n;
cout << "Enter K: ";
cin >> k;

if (n/100 != 0){

    for (int i = 100; n/i != 0; i=i*10)
    {

        for (int j = 10; n%i/j != 0; j=j*10)
        {
            
            if (n%i/j == k){

                existAB = true;
                break;

            }

        }
        
    }

}

if (existAB == true)
{
    cout << "True";
}
else if (existAB == false)
{
    cout << "False";
}

    return 0;
}