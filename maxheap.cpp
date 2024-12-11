//4.	Write a program to create a Maxheap of n elements and then display the elements of the heap.
#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void buildHeap(int arr[], int n)
{
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
void printHeap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int n;
    cout << "Enter the number of elements in the heap: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the heap:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    buildHeap(arr, n);
    printHeap(arr, n);
    return 0;
}
