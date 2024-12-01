//5.	Write a program to check if a Matrix is a Sparse Matrix.
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
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (m * n) / 2)
    {
        cout << "The matrix is a sparse matrix." << endl;
    }
    else
    {
        cout << "The matrix is not a sparse matrix." << endl;
    }
    return 0;
}