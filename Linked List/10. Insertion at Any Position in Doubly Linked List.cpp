#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node* temp=head;
    int count=1;
    
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodeToInsert= new Node(d);
    
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
}

//traversing a linked list
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    
    insertAtTail(tail,20);
    print(head);
    
    insertAtTail(tail,30);
    print(head);
    
    insertAtTail(tail,40);
    print(head);
    
    insertAtPosition(head, tail, 3, 25);
    print(head);
    return 0;
}
