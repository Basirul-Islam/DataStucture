#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right, *parent;
};

Node *root=NULL;


Node* createNode(int data)
{
    Node *temp;
    temp=new Node;
    
    temp->data=data;
    
    temp->left=NULL;
    temp->right=NULL;
    temp->parent=NULL;
    
    return temp;
}

void insert(Node *root,Node *newNode)
{
    if(newNode->data<root->data)
    {
        if(root->left==NULL)
        {
        	root->left=newNode;
        	newNode->parent=root;
        	
        }
        else
            insert(root->left,newNode);
    }
    
    if(newNode->data>root->data)
    {
        if(root->right==NULL)
        {
        	root->right=newNode;
        	newNode->parent=root;
        }
        else
            insert(root->right,newNode);
    }
}

void preOrder(Node *root)
{
    if(root!=NULL)
    {
       	cout << root->data << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node *root)
{
    if(root!=NULL)
    {
    
    	inOrder(root->left);
       	cout << root->data << endl;
        inOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << endl;
    }
}
Node* search(Node *root, int element)
 {
       if(root->data== element)
       {
 		cout << "Data Found!" << endl;
 		return root;
       }
 	else if (element > root->data)
 		search(root->right,element);
 	else if (element < root->data)	
 		search(root->left,element);
    return NULL;
 
 	
 }
 
Node* SecondLarge(Node* root)
{
    if(root==NULL)
    return NULL;

    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node* Delete(Node* root,int element)
{
    if(root==NULL) return root;
    
    else if(element < root->data) 
        root->left = Delete(root->left, element);
        
    else if (element > root->data)
        root->right = Delete(root->right, element);
    else
    {
        
        if(root->right == NULL && root->left == NULL)
        {
            delete root;
            root = NULL;   
        }
       
        else if(root->right == NULL)
        {
            Node* temp = root;
            root= root->left;
            delete temp;
        }
        else if(root->left == NULL)
        {
            Node* temp = root;
            root= root->right;
            delete temp;
        }
      
        else
        {
            Node* temp = SecondLarge(root->right);
            root->data = temp->data;
             Delete(root->left, temp->data); //root->left
        }
    }
    return root;
}
 

int main(void)
{

	while(true)
	{
	cout << "What do you want to do?\n 1.Construct Tree\n 2.Insert Element(s)\n 3.Show PreOrder Traversal\n 4.Show InOrder Traversal\n 5.Show PostOrder Traversal\n 6.Search an Element\n 7.Delete Element\n 8.Exit" << endl;
	 int n;
	 
	 cin >> n;
	 
	 if(n==8) break;
	 
	 if(n==1)
	 {
	 	int input;
	 	cin >> input;
	 		
	 	if(root==NULL) root=createNode(input);
	 	while(true)
	 	{
	 		cin >> input;
	 		
	 		if(input==0) break;
	 		
	 		Node *newNode=createNode(input);
	 		insert(root,newNode);
	 	}
	 }
	 
	 else if(n==2)
	 {
	 	int in;
	 
	 	cout << "Enter element you want to insert: " << endl;
	 	cin >> in;
	 	Node *newNode=createNode(in);
	 	
	 	insert(root,newNode);
	 }
	 
	 else if(n==3)
	 {
	 	preOrder(root);
	 }
	 
	 else if(n==4)
	 {
	 	inOrder(root);
	 }
	 
	 else if(n==5)
	 {
	 	postOrder(root);
	 }
	 
	 else if(n==6)
	 {
	 	int element;
	 	
	 	cout << "Enter  element you want to search: " << endl;
	 	
	 	cin >> element;
	 	
	 	search(root,element);
	 }
	 
	 else if(n==7)
	 {
	 	int element;
	 	
	 	cout << "Enter  element you want to delete: " << endl;
	 	
	 	cin >> element;
	 	
	 	Delete(root,element);
	 }
	 
	 
	 else
	 	cout << "Wrong Input!!!\nTry Again" << endl << endl;
	 	
	 }
	
	return 0;
}
