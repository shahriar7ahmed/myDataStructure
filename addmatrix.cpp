//2.	Write a program to add two matrices of order m x n.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> m >> n;
    int matrix1[m][n], matrix2[m][n], sum[m][n];
    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "Matrix after adding the two matrices: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}