//4.	Write a program to calculate the row sum and column sum of a matrix.
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
    cout << "Row sum of the matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " = " << sum << endl;
    }
    cout << "Column sum of the matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += matrix[j][i];
        }
        cout << "Column " << i + 1 << " = " << sum << endl;
    }
    return 0;
}