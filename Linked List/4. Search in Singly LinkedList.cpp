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

void search(Node* &head, int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    else
    {
        Node* temp=head;
        while(temp!=NULL&&temp->data!=data)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Element" <<" "<<data<<" not found"<<endl;
        }
        else
        {
            cout<<"Element"<<" "<<data<<" found" <<endl;
        }
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
    print(head);
    insertAtTail(tail, 12);
    print(head);
    search(head,2);

    //Creating empty list and checking for element with data=2;
    //Node* head=NULL;
    //Node* tail=NULL;
    //search(head,2);
}
