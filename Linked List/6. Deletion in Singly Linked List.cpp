#include<iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    Node* newNode = new Node(data);
    
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        if (tail == NULL) 
        {
            tail = newNode;
        }
        return;
    }

    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        cout << "Position is out of bounds" << endl;
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }
}

void deleteNode(int position, Node* &head, Node* &tail)
{
    if (head == NULL)
    {
        cout << "List is empty, cannot delete." << endl;
        return;
    }

    // Step 1: Check if the position is valid
    Node* temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    // If position is out of bounds
    if (position < 1 || position > length)
    {
        cout << "Position out of bounds, cannot delete." << endl;
        return;
    }

    // Step 2: Deleting the first node
    if (position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        // Update tail if the list becomes empty after deletion
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    // Step 3: Deleting middle or last node
    Node* curr = head;
    Node* prev = NULL;

    int count = 1;
    while (count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    // If we are deleting the last node, update the tail
    if (curr->next == NULL)
    {
        tail = prev;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Step 1: Create an initial list with one node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    cout << "Initial Linked List: ";
    print(head);
    
    // Inserting some values to have a list to work with
    insertAtPosition(head, tail, 2, 20);
    insertAtPosition(head, tail, 3, 30);
    insertAtPosition(head, tail, 4, 40);
    cout << "After insertions: ";
    print(head);

    // Step 2: Try deleting valid and invalid positions
    cout << "Deleting node at position 2 (valid):" << endl;
    deleteNode(2, head, tail);
    print(head);

    cout << "Deleting node at position 5 (invalid):" << endl;
    deleteNode(5, head, tail);
    print(head);

    cout << "Deleting node at position 1 (valid, head):" << endl;
    deleteNode(1, head, tail);
    print(head);

    cout << "Deleting node at position 3 (invalid):" << endl;
    deleteNode(3, head, tail);
    print(head);

    return 0;
}
