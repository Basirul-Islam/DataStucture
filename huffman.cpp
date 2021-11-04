#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	
	node *left, *right;;
};

//node *tempA= new node;
//node *tempB= new node;
//node *parent= new node;

//node *head= new node;

map <char,int> mp1;
map <char,int>:: iterator it1=mp1.begin();

multimap <int,char> mp2;
map <int,char>:: iterator it2=mp2.begin();;

multimap <int,char> mp3;
map <int,char>:: iterator it3=mp3.begin();

multimap <int,node*> mp4;
map <int,node*>:: iterator it4=mp4.begin();

node* TreeCnstructor()
 {
 	node* root= new node;
 	it1=mp1.begin();
	
	while(mp2.size()!=1)
	{
		node *tempA= new node;
		node *tempB= new node;
		node *parent= new node;
	
	
		it2=mp2.begin();
		it4=mp4.begin();
		
		it1=mp1.find(it2->second);
		
		//cout << it1->first << "  " << it1->second << endl;
		
		if(it1 != mp1.end())
		{
			tempA->data =it2->first;
		
			tempA->left =NULL;
			tempA->right =NULL;
		}
		
		else
		{
			tempA =it4->second;
			
			mp4.erase(it4);
			it4=mp4.begin();
			
		}
		
		mp2.erase(it2);
		
		cout << "Frequency ---- Character"  << endl;
		for(it2=mp2.begin();it2!=mp2.end();it2++)
		{
			cout << "    "<< it2->first << " ---------- " << it2->second << endl;
		}
	
		it2=mp2.begin();
		
		it1=mp1.find(it2->second);
		
		if(it1 != mp1.end())
		{
			tempB->data =it2->first;
			tempB->left =NULL;
			tempB->right =NULL;
			
		}
		
		else
		{
			tempB =it4->second;
			
			mp4.erase(it4);
			it4=mp4.begin();
		

		}
		
		mp2.erase(it2);
		
		cout << "Frequency ---- Character"  << endl;
		for(it2=mp2.begin();it2!=mp2.end();it2++)
		{
			cout << "    "<< it2->first << " ---------- " << it2->second << endl;
		}		
		
		//it2=mp2.begin();
		
		
		parent->data = tempA->data + tempB->data; 
		
		parent->left=tempA;
		parent->right=tempB;
		
		mp2.insert(pair<int,char>(parent->data,'*'));
		mp4.insert(pair<int,node*>(parent->data,parent));
		
		cout << "Frequency ---- Character"  << endl;
		for(it2=mp2.begin();it2!=mp2.end();it2++)
		{
			cout << "    "<< it2->first << " ---------- " << it2->second << endl;
		}
		
		if(mp2.size()==1)
			root=parent;	
	
		
	}
	
	
	return root;
	
 
 }
 
 
void PreOrder(node *head)
{
	
	if(head ==NULL)
		return;
    if(head!=NULL)
    {
       	cout << head->data << endl;
        PreOrder(head->left);
        PreOrder(head->right);
    }

}

int main(void)
{
	
	string s,result;
	
	cin >> s;
	//create Table
	for(int i=0;i<s.size();i++)
	{
		mp1[s[i]]++;
	}
	
	cout << "Character ---- Frequency"  << endl;
	
	for(it1=mp1.begin();it1!=mp1.end();it1++)
	{
		cout << "    "<< it1->first << " ---------- " << it1->second << endl;
	}
	
	for(it1=mp1.begin();it1!=mp1.end();it1++)
	{
		mp2.insert(pair <int,char> (it1-> second,it1->first));
		mp3.insert(pair <int,char> (it1-> second,it1->first));
	}
	
	cout << "Frequency ---- Character"  << endl;
	
	for(it2=mp2.begin();it2!=mp2.end();it2++)
	{
		cout << "    "<< it2->first << " ---------- " << it2->second << endl;
	}
	
	// Tree construction
	
	
	node *head= new node;
	head=TreeCnstructor();
	PreOrder(head);
	
	return 0;
}

