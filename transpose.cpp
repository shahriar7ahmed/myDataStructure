//1.	Write a program to interchange the row and column of a matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> m >> n;
    int matrix[m][n];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix before interchanging row and column: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix after interchanging row and column: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}