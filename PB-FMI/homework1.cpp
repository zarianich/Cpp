#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{

    /* Zadacha 0

    float x, y, bx, by, dx, dy;
    bool acceptableInput = false, unAcceptableCharacterFound = false, decimalPointEntered = false;

    while (acceptableInput == false)
    {

        cout << "Enter x: ";
        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        decimalPointEntered = false;
        int i = 0;
        if (str[0] == '-')
            i = 1;
        for (; i < str.length(); i++)
        {

            if ((decimalPointEntered == false) && (str[i] == '.'))
            {
                decimalPointEntered = true;
                i+=1;
            }
            
            if (isdigit(str[i]) == false)
                unAcceptableCharacterFound = true;

        }
        if (unAcceptableCharacterFound == false){

            acceptableInput = true;
            x = stod(str);

        }
        else cout << "That is not a rational number!" << endl;
    }

    acceptableInput = false;
    unAcceptableCharacterFound = false;
    decimalPointEntered = false;

    while (acceptableInput == false)
    {

        cout << "Enter y: ";
        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        decimalPointEntered = false;
        int i = 0;
        if (str[0] == '-')
            i = 1;
        for (; i < str.length(); i++)
        {

            if ((decimalPointEntered == false) && (str[i] == '.'))
            {
                decimalPointEntered = true;
                i+=1;
            }
            
            if (isdigit(str[i]) == false)
                unAcceptableCharacterFound = true;

        }
        if (unAcceptableCharacterFound == false){

            acceptableInput = true;
            y = stod(str);

        }
        else cout << "That is not a rational number!" << endl;
    }
    cout << fixed << showpoint << setprecision(3);

    bx = 4 * cos ((45 * M_PI) / 180);
    by = 4 * sin ((45 * M_PI) / 180);
    dx = -bx;
    dy = by;

    if (pow(x, 2) + pow(y, 2) <= 16)
    {
        if ((abs(x) == abs(y)) || (abs(x) == bx))
            cout << "The point is on a border" << endl;
        
        if ((x > bx) && (x < 4))
            cout << "The point is in the purple region" << endl;

        if ((x > 0) && (y > 0) && (atan(y/x) > (45 * M_PI) / 180) && (atan(y/x) < (90 * M_PI) / 180))
            cout << "The point is in the green region" << endl;
        
        if (((x > 0) && (x < bx) && (y > 0) && (atan(y/x) > 0) && (atan(y/x) < (45 * M_PI) / 180)) || ((x > 0) && (x < bx) && (y < 0)))
            cout << "The point is in the yellow region" << endl;

        if ((x < 0) && (y < 0) && (atan(y/x) > (45 * M_PI) / 180) && (atan(y/x) < (90 * M_PI) / 180))
            cout << "The point is in the blue region" << endl;

        if (((x < 0) && (x > -bx) && (y < 0) && (atan(y/x) > (0 * M_PI) / 180) && (atan(y/x) < (45 * M_PI) / 180)) || ((x < 0) && (x > -bx) && (y > 0) && (atan(abs(y/x)) > (0 * M_PI) / 180) && (atan(abs(y/x)) < (45 * M_PI) / 180)))
            cout << "The point is in the pink region" << endl;

        if ((x < 0) && (y < 0) && (atan(abs(y/x)) > (45 * M_PI) / 180) && (atan(abs(y/x)) < (90 * M_PI) / 180))
            cout << "The point is in the red region" << endl;        
        
    }
    else
    {

        if ((x > -2) && (x < 2) && (y > -7) && (y < 7))
            cout << "The point is in the gray region" << endl;
        else
            cout << "The point is outside the regions" << endl;    

    }
    
    */



    /* Zadacha 1

    int x;
    bool acceptableInput = false, unAcceptableCharacterFound = false;

    while (acceptableInput == false)
    {

        cout << "Enter an integer (x): ";
        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        int i = 0;
        if (str[0] == '-')
            i = 1;
        for (; i < str.length(); i++)
        {

            if (isdigit(str[i]) == false)
                unAcceptableCharacterFound = true;

        }
        if (unAcceptableCharacterFound == false){

            acceptableInput = true;
            x = stoi(str);

        }
        else cout << "That is not an integer!" << endl;
    }
    for (int k = 1; k < 35; k++)
    {
        if (x % 2 == 0)
            x = x/2;
        else
            x = 3 * x + 1;
        
    }
    

    cout << "f35(x) = " << x;
    return 0;
    
    */



    /* Zadacha 2

    unsigned k, nBor = 0, nPras = 0, nShip = 0;
    bool acceptableInput = false, unAcceptableCharacterFound = false;
    string barcodes;

    while (acceptableInput == false)
    {

        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        for (int i = 0; i < str.length(); i++)
        {

            if (isdigit(str[i]) == false)
                unAcceptableCharacterFound = true;

        }
        if (unAcceptableCharacterFound == false){

            acceptableInput = true;
            k = stoi(str);

        }
        else cout << "That is not a natural number!" << endl;
    }

    acceptableInput = false;
    unAcceptableCharacterFound = false;

    while (acceptableInput == false)
    {

        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        for (int i = 0; i < str.length(); i++)
        {

            if (i % 2 == 0)
            {

                if (isdigit(str[i]) == false)
                    unAcceptableCharacterFound = true;
                else
                    barcodes += str[i];

            }else
            {

                if (str[i] != ' ')
                    unAcceptableCharacterFound = true;

            }

        }
        if (unAcceptableCharacterFound == false)
            acceptableInput = true;

        else if ((unAcceptableCharacterFound == true) || (str.length() != (k * 2 - 1)))
            cout << "Entered invalid archive, try again!" << endl;
    }
    for (int i = 0; i < k; i+=8)
    {
        unsigned barcode;
        string barcodeStr; 
        for (int j = i; j < i + 8; j++)
        {
            barcodeStr += barcodes[j];
        }
        barcode = stoi(barcodeStr);
        if (barcode / 10000000 == 0)
            break;
        else{
        barcode = barcode / 10 % 10000;
        }
        if (barcode % 7 == 0) nBor+=1;
        if (barcode % 13 == 0) nPras+=1;
        if (barcode % 17 == 0) nShip+=1;
        
    }

    cout << "Мармалад от боровинки: " << nBor << endl << "Мармалад от праскови: " << nPras << endl << "Шипков мармалад: " << nShip;
    
    */

    /* Zadacha 3

   int a, b, sumOfInterestingNumbers = 0;
   bool notInteresting = false, acceptableInput = false, unAcceptableCharacterFound = false;

    while (acceptableInput == false)
    {

        cout << "Enter an integer (A): ";
        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        int i = 0;
        if (str[0] == '-')
            i = 1;
        for (; i < str.length(); i++)
        {
            
            if (isdigit(str[i]) == false)
                unAcceptableCharacterFound = true;

        }
        if (unAcceptableCharacterFound == false){

            acceptableInput = true;
            a = stoi(str);

        }
        else cout << "That is not an integer!" << endl;
    }

    acceptableInput = false; 
    unAcceptableCharacterFound = false;

    while (acceptableInput == false)
    {

        cout << "Enter another integer (B): ";
        string str;
        getline(cin >> ws, str);
        unAcceptableCharacterFound = false;
        int i = 0;
        if (str[0] == '-')
            i = 1;
        for (; i < str.length(); i++)
        {

            if (isdigit(str[i]) == false)
                unAcceptableCharacterFound = true;
        }
        if (unAcceptableCharacterFound == false){

            acceptableInput = true;
            b = stoi(str);

        }
        else cout << "That is not an integer!" << endl;
    }

   for (int g = a; g <= b; g++)
    {
        notInteresting = false;
        if (g < 10 && g > -10)
            {
                sumOfInterestingNumbers += g;
            }

        else {
            for (int i = 1; g / i != 0; i = i * 10)
            {

                for (int j = 1; j < i; j = j * 10)
                {

                    if (g >= 0)
                    {
                        if (((g / i % 10) % 2 != (g % i / j) % 2) && notInteresting == false)
                            sumOfInterestingNumbers += g;

                        else notInteresting = true;
                    }
                    else
                    {
                        if (((g / i % 10) % -2 != (g % i / j) % 2) && notInteresting == false)
                            sumOfInterestingNumbers += g;

                        else notInteresting = true;
                    }
                }
            }
        }
    } 

   cout << "The sum of all interesting numbers from "<< a << " to " << b  << " is: " <<  sumOfInterestingNumbers;

   */

    /* Zadacha 4

    unsigned secretNum[4], turnCounter = 0, guess, bikove = 0, kravi = 0;
    bool acceptableInput = false, unAcceptableCharacterFound = false;

    const unsigned N = 10;

    srand(time(0));

    secretNum[0] = rand() % 9 + 1;
    for (int i = 1; i < 4; i++)
        secretNum[i] = secretNum [0];

    while (secretNum[0] == secretNum[1])
        secretNum[1] = rand() % 9 + 1;
    while ((secretNum[2] == secretNum[0]) || (secretNum[2] == secretNum[1]))
        secretNum[2] = rand() % 9 + 1;
    while ((secretNum[3] == secretNum[0]) || (secretNum[3] == secretNum[1]) || (secretNum[3] == secretNum[2]))
        secretNum[3] = rand() % 9 + 1;
    
    cout << "\n\t\t\tWelcome to Bulls&Cows!\n\n\t\tGuess the 4-digit number and you win!\n\n\t\tHint: the digits are all different!\n\n\n";

    for (int i = 1; i <= N + 1; i++)
    {
        turnCounter+=1;
        if (turnCounter > N)
            cout << endl << "Number of attempts exceeded. You lose. The number was: " << secretNum[0] << secretNum[1] << secretNum[2] << secretNum[3];
        else
        {

            cout << endl << "Turn # " << turnCounter << endl;
            acceptableInput = false, unAcceptableCharacterFound = false;
            bikove = 0;
            kravi = 0;
            while (acceptableInput == false)
            {

                cout << endl << "Enter your guess: ";
                string str;
                getline(cin >> ws, str);
                unAcceptableCharacterFound = false;
                if (str.length() != 4)
                    cout << endl << "Enter a 4-digit natural number! " << endl;
                    
                else
                {

                    for (int i = 0; i < str.length(); i++)
                    {

                        if (isdigit(str[i]) == false)
                            unAcceptableCharacterFound = true;
                    }
                    if (unAcceptableCharacterFound == false)
                    {

                        acceptableInput = true;
                        guess = stoi(str);
                    }
                    else
                        cout << endl << "Enter a 4-digit natural number! " << endl;

                }
            }
            if (guess / 1000 == secretNum[0])
                bikove+=1;
            if (guess / 100 % 10 == secretNum[1])
                bikove+=1;
            if (guess / 10 % 10 == secretNum[2])
                bikove+=1;
            if (guess % 10 == secretNum[3])
                bikove+=1;
            

            if (bikove == 4){

                cout << endl << "You win!";
                break;

            }
            else
            {

                if ((guess / 1000 == secretNum[1]) || (guess / 1000 == secretNum[2]) || (guess / 1000 == secretNum[3]))
                    kravi+=1;
                if ((guess / 100 % 10 == secretNum[0]) || (guess / 100 % 10 == secretNum[2]) || (guess / 100 % 10 == secretNum[3]))
                    kravi+=1;
                if ((guess / 10 % 10 == secretNum[0]) || (guess / 10 % 10 == secretNum[1]) || (guess / 10 % 10 == secretNum[3]))
                    kravi+=1;
                if ((guess % 10 == secretNum[0]) || (guess % 10 == secretNum[1]) || (guess % 10 == secretNum[2]))
                    kravi+=1;

                cout << endl << bikove << " bull(s) and " << kravi << " cow(s)! " << endl;

            }

        }
        
    }
    
    */

    return 0;
}