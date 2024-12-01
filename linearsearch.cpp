//1.	Write a program to search an element from a list of n numbers using Linear Search algorithm.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key, flag = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found." << endl;
    }
    return 0;
}