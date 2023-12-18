#include <iostream>
#include <cstring>

using namespace std;

unsigned CheckSize(unsigned size){

    int tmp = -1;
    do
    {
        cout<< "Enter array size: ";
        cin >> tmp;
        if (tmp < 0)
            cout << "Size has to be a positive number!" << endl;
        if (tmp > 1024)
            cout << "Max size is 1024" << endl;
    } while (tmp < 0 || tmp > 1024);
    
    return (unsigned)tmp;
}

void CheckCells(unsigned size, char* cells){

    string cell;

    for (int i = 0; i < size; i++){
        do
        {
            getline(cin, cell);
            if (cell != "g" && cell != "y" && cell != "r")
                cout << "Enter g, y or r" << endl;    
        } while (cell != "g" && cell != "y" && cell != "r");
        *&cells[i] = cell[0];
    }
    
}

int main(){

    unsigned size; 
    int turns = 0, max_turns = 0;
    char user_Input;
    bool ignore_Red = false;

    size = CheckSize(size);
    
    char* cells = new char[size];

    CheckCells(size, cells);
    
    for (int i = 0; i < size; i++)
    {
        switch (cells[i])
        {
        case 'g':
            ignore_Red = false;
            turns += 1;
            break;
        case 'y':
            ignore_Red = true;
            turns += 1;
            break;    
        case 'r':
            if (ignore_Red == false){ 
                if (turns > max_turns)
                    max_turns = turns;
                turns = 0;
            }
            break;
        default:
            break;
        }
        if (ignore_Red == true && i == size -1)
            turns -=1;
    }
    
    if (turns > max_turns)
        max_turns = turns;
    cout << max_turns;

    delete[] cells;
    return 0;
}