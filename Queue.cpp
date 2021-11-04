#include<bits/stdc++.h>

using namespace std;

int array[7];
int element,size=7;
int Front=-1,Rare=-1;


void EnQueue(int number)
{
	if(Front == -1) Front ++;
	if( Rare == size)
	{
		cout << "OVERFLOWED!!" << endl;
	}
	 
	else
		Rare++;
		array[Rare]=number;
		    
	return ; 
     
  }
  
  
}

int deQueue()
{
    if (Front == size+1)
    {
       cout << "UNDERFLOW!!" << endl;
       return 0;
    }
    
    int del= array[Front];
	array[Front] = 0;
		
	Front++;
		    
	cout << del << " has been deleted from Queue" << endl;
	
    return del;
}



void Display()
{

	cout << endl;
	
	if(Front==-1 )
	{
		cout << "Empty!!" << endl;
		return;
	}

	if(Front <= Rare)
	 {
		for(int i=Front;i<=Rare;i++)
		{
		    cout << array[i] << endl;
		}
	 }



}

int main (void)
{
	while(true)
	{
		int choice;
		
		cout << "\nWhat do you want to do?\n 1.Insert Element\n 2.Delete Element\n 3.Show Circular Queue\n 4.Exit" << endl;
		
		cin >> choice;
		
		if(choice == 4)		break;
		
		else if(choice == 1)
		{
			cout << "how many element(s) you want to insert [1 to 7]:" << endl;
			
			int n;
			cin >> n;
			
			for(int i=0;i<n;i++)
			{
				cout << "Enter element you want to insert:" << endl;
			
				cin >> element;
			
				EnQueue(element);
				
				if((Front==0 && Rare==size-1) || Rare+1 == Front) break;
			}
		}
		
		else if(choice == 2)
		{
			deQueue();
		}
		
		else if(choice == 3)
		{
			Display();
		}
	
	}
	
	
	return 0;
}
