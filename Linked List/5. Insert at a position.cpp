#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};

void insertAtTail(Node* &tail, int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &head, int position, int data)
{
    Node* temp=new Node(data);
    
    if(position==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    
    Node* temp1=head;
    int count=1;
    while(temp1!=NULL&&count<position-1)
    {
        temp1=temp1->next;
        count++;
    }
    if(temp1==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        temp->next=temp1->next;
        temp1->next=temp;
    }
}

void print(Node* &head)
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
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtPosition(head,3,25);

    //Checking for empty list
    // Node* head=NULL;
    // Node* tail=NULL;
    // insertAtPosition(head,3,25);
    // print(head);
}
