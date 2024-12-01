//2.	Write a program to search an element from a list of n numbers using Binary Search algorithm.
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
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at position " << mid + 1 << endl;
            flag = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found." << endl;
    }
    return 0;
}