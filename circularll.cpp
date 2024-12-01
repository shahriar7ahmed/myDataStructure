//2.	Write a program to create a Circular Header Linked List of n elements and then display the list.
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
    temp->next = head;
    return head;
}
void displayLinkedList(Node *head)
{
    Node *temp = head;
    cout << "The elements of the linked list are: ";
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number of elements of the linked list: ";
    cin >> n;
    Node *head = createLinkedList(n);
    displayLinkedList(head);
    return 0;
}
