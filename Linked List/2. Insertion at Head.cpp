#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  
  //constructor
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};

void insertAtHead(Node* &head, Node* &tail, int data)
{
  if(head==NULL)
  {
    Node* temp=new Node(data);
    head=temp; 
    tail=temp;
  }
  else
  {
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
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
    // Node* node1=new Node(10);
    // Node* head=node1;
    Node* head=NULL; //empty linkedlist case
    Node* tail=NULL;
    
    print(head);
    
    insertAtHead(head,tail,12);
    print(head);
    
    insertAtHead(head,tail,15);
    print(head);
    return 0;
}
