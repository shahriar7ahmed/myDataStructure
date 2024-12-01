//2.	Write a program to create a Linked List of n elements and then search an element from the list. 
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *createLinkedList(int n)
{
    Node *head = new Node();
    Node *temp = head;
    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++)
    {
        cin >> temp->data;
        if (i != n - 1)
        {
            temp->next = new Node();
            temp = temp->next;
        }
    }
    temp->next = NULL;
    return head;
}
void searchElement(Node *head, int element)
{
    Node *temp = head;
    int pos = 1;
    while (temp != NULL)
    {
        if (temp->data == element)
        {
            cout << "Element found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Element not found." << endl;
}
int main()
{
    int n, element;
    cout << "Enter the number of elements of the linked list: ";
    cin >> n;
    Node *head = createLinkedList(n);
    cout << "Enter the element to be searched: ";
    cin >> element;
    searchElement(head, element);
    return 0;
}
