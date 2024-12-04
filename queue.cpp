//implement queue ,enqueue,dequeue,front,isEmpty,display wuihtout using STL and add a switch case to perform the operations
#include<bits/stdc++.h>
using namespace std;
#define MAX 10
struct Queue
{
    int front,rear;
    int arr[MAX];
};
Queue q;
void enqueue(int data)
{
    if(q.rear==MAX-1)
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    q.arr[++q.rear]=data;
}
void dequeue()
{
    if(q.front>q.rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Element deleted is "<<q.arr[q.front++]<<endl;
}
void front()
{
    if(q.front>q.rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Front element is "<<q.arr[q.front]<<endl;
}   
void isEmpty()
{
    if(q.front>q.rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue is not empty"<<endl;
}
void display()
{
    if(q.front>q.rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue elements are ";
    for(int i=q.front;i<=q.rear;i++)
    {
        cout<<q.arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    q.front=0;
    q.rear=-1;
    int choice,data;
    while(1)
    {
        cout<<"1.Enqueue 2.Dequeue 3.Front 4.isEmpty 5.Display 6.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter data"<<endl;
                    cin>>data;
                    enqueue(data);
                    break;
            case 2: dequeue();
                    break;
            case 3: front();
                    break;
            case 4: isEmpty();
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
            default: cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
