#include <iostream>
#include <cstring>

using namespace std;

void calculateExpr(char* expr, unsigned size){

    int result = 0, f_int = 0, s_int = 0;
    string tmp = "";
    bool f_operation = true;

    for (int i = 0; i < size; i++)
    {
        switch (*&expr[i])
        {
        case 'o':
            if (*&expr[i + 1] == 'n' && *&expr[i + 2] == 'e'){
                tmp += "1";
                i +=2;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break;
        case 't':
            if (*&expr[i + 1] == 'w' && *&expr[i + 2] == 'o'){
                tmp += "2";
                i +=2;
            }
            if (*&expr[i + 1] == 'h' && *&expr[i + 2] == 'r' && *&expr[i + 3] == 'e' && *&expr[i + 4] == 'e'){
                tmp += "3";
                i +=4;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break;
        case 's':
            if (*&expr[i + 1] == 'i' && *&expr[i + 2] == 'x'){
                tmp += "6";
                i +=2;
            }
            if (*&expr[i + 1] == 'e' && *&expr[i + 2] == 'v' && *&expr[i + 3] == 'e' && *&expr[i + 4] == 'n'){
                tmp += "7";
                i +=4;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break;   
        case 'z':
            if (*&expr[i + 1] == 'e' && *&expr[i + 2] == 'r' && *&expr[i + 3] == 'o'){
                tmp += "0";
                i +=3;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break; 
        case 'f':
            if (*&expr[i + 1] == 'o' && *&expr[i + 2] == 'u' && *&expr[i + 3] == 'r'){
                tmp += "4";
                i +=3;
            }
            if (*&expr[i + 1] == 'i' && *&expr[i + 2] == 'v' && *&expr[i + 3] == 'e'){
                tmp += "5";
                i +=3;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break; 
        case 'n':
            if (*&expr[i + 1] == 'i' && *&expr[i + 2] == 'n' && *&expr[i + 3] == 'e'){
                tmp += "9";
                i +=3;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break; 
        case 'e':
            if (*&expr[i + 1] == 'i' && *&expr[i + 2] == 'g' && *&expr[i + 3] == 'h' && *&expr[i + 4] == 't'){
                tmp += "8";
                i +=4;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break; 
        case 'p':
            if (*&expr[i + 1] == 'l' && *&expr[i + 2] == 'u' && *&expr[i + 3] == 's'){
                if (f_operation == true){
                    f_int = stoi(tmp);
                    f_operation = false;
                    tmp = "";
                }
                else{
                    s_int = stoi(tmp);
                    f_operation = true;
                    tmp = "";
                    result += (f_int + s_int);
                }
                i +=3;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break; 
        case 'm':
            if (*&expr[i + 1] == 'i' && *&expr[i + 2] == 'n' && *&expr[i + 3] == 'u' && *&expr[i + 4] == 's'){
                if (f_operation == true){
                    f_int = stoi(tmp);
                    f_operation = false;
                    tmp = "";
                }
                else{
                    s_int = stoi(tmp);
                    f_operation = true;
                    tmp = "";
                    result += (f_int - s_int);
                }
                i +=4;
            }
            else{
                cout << "Entered expression is invalid!";
                return;
            }
            break;                           
        default:
            break;
        }
    }
    
    cout << endl << result;
    

}

int main(){

    unsigned size;

    cin >> size;
    cin.ignore();

    char* expr = new char[size];

    cin.getline(expr, size);
    
    calculateExpr(expr, size);

    delete[] expr;
    return 0;
}