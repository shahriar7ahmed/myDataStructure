//3.	Write a program to calculate the multiplication of two matrices.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, p;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> m >> n;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> p;
    int matrix1[m][n], matrix2[n][p], product[m][p];
    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Matrix after multiplying the two matrices: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}