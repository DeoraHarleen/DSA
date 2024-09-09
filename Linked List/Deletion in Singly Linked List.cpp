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
  
  ~Node()
  {
    //   int value=this->data;
      //memory free
      if(this->next!=NULL)
      {
          delete next;
          this->next=NULL;
      }
    //   cout<<"memory is free for node with data "<<value<<endl;
  }
};


void insertAtPosition(Node* &head, Node* &tail, int position, int data)
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
        
        if(temp->next==NULL)
        {
            tail=temp;
        }
    }
}

void deleteNode(int position, Node* &head, Node* &tail)
{
    //deleting first node or start node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
        
        // Update tail if there was only one node
        if(head == NULL)
        {
            tail = NULL;
        }
        return;
    }
    
    else
    {
        //deleting middle node or last node
        Node* curr=head;
        Node*prev=NULL;
        
        int count=1;
        while(count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        // If the deleted node was the last node, update the tail
        if(curr->next == NULL)
        {
            tail = prev;
        }
        curr->next=NULL;
        delete curr;
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
    
    insertAtPosition(head,tail, 2,20);
    insertAtPosition(head,tail, 3, 30);
    insertAtPosition(head,tail, 4, 40);
    cout<<"Tail: ";
    print(tail);
    
    cout<<"Linked List is: ";
    print(head);
    
    cout<<"Linked List after deleting the node is: ";
    deleteNode(4,head,tail);
    print(head);
    
    cout<<"Tail after deletion is: ";
    print(tail);
}
