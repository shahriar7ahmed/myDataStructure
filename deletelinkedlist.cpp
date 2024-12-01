//1.	Write a program to create a Linked List of n elements and then delete an element from the list.
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
Node *deleteElement(Node *head, int element)
{
    Node *temp = head;
    if (temp->data == element)
    {
        head = temp->next;
        delete temp;
        return head;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == element)
        {
            Node *temp1 = temp->next;
            temp->next = temp1->next;
            delete temp1;
            return head;
        }
        temp = temp->next;
    }
    cout << "Element not found." << endl;
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
    int n, element;
    cout << "Enter the number of elements of the linked list: ";
    cin >> n;
    Node *head = createLinkedList(n);
    cout << "Enter the element to be deleted: ";
    cin >> element;
    head = deleteElement(head, element);
    displayLinkedList(head);
    return 0;
}
