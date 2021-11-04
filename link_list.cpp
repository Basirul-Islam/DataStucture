#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *previous, *next;
};

Node *head,*tail;

void createLinkList()
{
    head=NULL;
    tail=NULL;
}

Node* createNode(int data)
{
    Node *temp;
    temp=new Node;
    temp->data=data;
    //(*temp).data=data;
    temp->previous=NULL;
    temp->next=NULL;
    return temp;
}

Node* searchNode(int searchKey)
{
    for(Node *current=head;current!=NULL;current=current->next)
    {
        if(current->data==searchKey)
            return current;
    }
    return NULL;
}

void insertAtEnd(Node *node)
{
    if(head==NULL && tail==NULL)
    {
        head=node;
        tail=node;
    }
    else
    {
        node->previous=tail;
        tail->next=node;
        tail=node;
    }
}

void insertAtBegining(Node *node)
{
    if(head==NULL && tail==NULL)
    {
        head=node;
        tail=node;
    }
    else
    {
        node->next=head;
        head->previous=node;
        head=node;
    }
}

void insertInTheMiddle(Node *node, Node *previous)
{
    node->previous=previous;
    node->next=previous->next;
    previous->next->previous=node;
    previous->next=node;
}


void travarseForward()
{
    for(Node *current=head;current!=NULL;current=current->next)
    {
        cout<<current->data<<endl;
    }
}

void travarseBackward()
{
    for(Node *current=tail;current!=NULL;current=current->previous)
    {
        cout<<current->data<<endl;
    }
}

int main()
{
    createLinkList();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        Node *newNode=createNode(input);
        insertAtEnd(newNode);
    }

    insertAtBegining(createNode(90));
    insertInTheMiddle(createNode(10),searchNode(3));
    travarseForward();
    travarseBackward();

    return 0;
}
