#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int n;
    bool flag = true;
    cin >> n;


    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j)
            matrix[i][j] = 0;
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (matrix[i][j] != matrix[j][i])
                flag = false;

    cout << (flag ? "YES" : "NO");

    return 0;
}