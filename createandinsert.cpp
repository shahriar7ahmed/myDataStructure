//2.	Write a program to create an array of n elements and then insert an element to the list.
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
    cout << "Enter the element to insert: ";
    int element;
    cin >> element;
    cout << "Enter the position to insert: ";
    int pos;
    cin >> pos;
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = element;
    cout << "Array after inserting the element: ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}