//3.	Write a program to create a Linked List of n elements and then insert an element to the list.
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
Node *insertElement(Node *head, int element, int pos)
{
    Node *temp = head;
    Node *newNode = new Node();
    newNode->data = element;
    if (pos == 1)
    {
        newNode->next = head;
        return newNode;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
void displayLinkedList(Node *head)
{
    Node *temp = head;
    cout << "The elements of the linked list are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int n, element, pos;
    cout << "Enter the number of elements of the linked list: ";
    cin >> n;
    Node *head = createLinkedList(n);
    cout << "Enter the element to be inserted: ";
    cin >> element;
    cout << "Enter the position at which the element is to be inserted: ";
    cin >> pos;
    head = insertElement(head, element, pos);
    displayLinkedList(head);
    return 0;
}
