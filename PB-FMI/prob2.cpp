#include <iostream>

using namespace std;

int main(){

    int a, b, min = 0, max = 0, minEnd = 0, maxEnd = 0;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    bool sameNum = false, noAdjNum = true, foundMin = false;

    if (a > b)
    {
        
        min = b;
        max = a;
    
    }else{

        min = a;
        max = b;

    }
    minEnd = min;
    for (int g = min; g <= max; g++)
    {
        sameNum = false;

        for (int i = 1; g/i != 0; i=i*10)
        {
            
            for (int j = 1; j < i; j=j*10)
            {
                
                if (g/i%10 == g%i/j){

                    sameNum = true;
                    break;

                }

            }
        
        }  
        if (sameNum == false && foundMin == false && minEnd == min){

                minEnd = g;
                foundMin = true;

            }
        if (sameNum == false && g > maxEnd)
                maxEnd = g;

    }
    
    cout <<endl <<  minEnd << " " << maxEnd << endl;
    cout << maxEnd - minEnd;

    return 0;
}