#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int row, col;
    cin >> row >> col;

    int** matrix = new int*[row];
    int** trans_matrix = new int*[col];
    for (int i = 0; i < row; ++i)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; ++j)
            cin >> matrix[i][j];
    }
    for (int i = 0; i < col; i++)
        trans_matrix[i] = new int[row];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            trans_matrix[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
            cout << trans_matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
