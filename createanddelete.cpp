//3.	Write a program to create an array of n elements and then delete an element from the list
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position to delete: ";
    int pos;
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "Array after deleting the element: ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}