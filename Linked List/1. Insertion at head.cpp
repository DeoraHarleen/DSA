#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insertBeginning(int data)
{
    node* newnode=new node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void print()
{
    if(head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    else
    {
        cout<<"List is empty";
    }
}

int main()
{
    insertBeginning(30);
    insertBeginning(20);
    insertBeginning(10);
    print(); //output will be 10 20 30
    return 0;
    
}
