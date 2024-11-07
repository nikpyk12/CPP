#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int n;
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
            matrix[i][j] = abs(i - j);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
