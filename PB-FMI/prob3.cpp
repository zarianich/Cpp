#include <iostream>
#include <cstring>

using namespace std;

void collect(int** matrix_ptr, int n_received){

    int** matrix_received = new int*[n_received];
    for (int i = 0; i < n_received; i++){
        matrix_received[i] = new int[n_received];
        for (int j = 0; j < n_received; j++)
        matrix_received[i][j] = matrix_ptr[i][j];
        
    }

    for (int i = n_received; i >= 0; i--)
    {
        for (int j = 0; j < n_received; j++)
        {

            cout << matrix_received[i][j];
            /*checked_number = matrix_ptr[i + j][j];
            checked_number_len = checked_number.length();
            for (int first_num_pos = 0; first_num_pos < checked_number_len; first_num_pos++){

                for (int second_num_pos = first_num_pos + 1; second_num_pos < checked_number_len; checked_number_len)
                {
                    if (checked_number[first_num_pos == checked_number[second_num_pos]])
                        br++;
                }
                
            }*/
            
        }
        
    }
    for (int i = 0; i < n_received; i++)
        delete[] matrix_received[i];
    delete[] matrix_received;

}

int main (){

    unsigned n;

    int** matrix = new int*[n];

    cout << "N: ";
    cin >> n;

    for (int i = 0; i < n; i++){

        matrix[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
        
    }

    collect(matrix, n);
    //delete matrix

    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;

    cout << endl;
    return 0;
}