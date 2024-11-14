#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int row, col, len;
    bool hasFound = false;
    cin >> row >> col;

    int** matrix = new int*[row];
    for (int i = 0; i < row; ++i)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; ++j)
            cin >> matrix[i][j];
    }

    cin >> len;

    for (int i = 0; i < row; ++i)
    {
        int count = 0;
        for (int j = 0; j < col; ++j)
        {
            if (matrix[i][j] == 0)
                count++;
            if (matrix[i][j] == 1 || j == col - 1)
            {
                if (count >= len)
                    hasFound = true;
                count = 0;
            }
        }

        if (hasFound)
        {
            cout << i + 1;
            break;
        }
    }
    if (!hasFound)
        cout << 0;
    return 0;
}
