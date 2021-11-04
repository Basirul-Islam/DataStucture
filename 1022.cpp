#include<bits/stdc++.h>

using namespace std;

int test,root,point=0;
int arr[10000];

void Print(int arr[])
{
    for(int i=0;i<point;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}



void Heapify(int in)
{
   while(in>0)
    {

        if(in%2==0)
        {

            int temp;
            temp=in;

            temp=temp-2;
            root=temp/2;

            if(arr[root]<arr[in])
            {
                swap(arr[root],arr[in]);
                   in=root;
            }
            
            else
				break;
				
        }
        else
        {
           
            int temp;
           	temp=in;
           	
            temp=temp-1;
            root=temp/2;
          
            if(arr[root]<arr[in])
            {
                swap(arr[root],arr[in]);
                in=root;
            }
            else
            	break;


        }

    }


}


void printDescendingOrder(int in)
{
	 int test=0;

            root=in;
          

            int left=2*root+1;
            int right=2*root+2;
            
            if(right>point)
            {
                return ;
            }
           
           if(arr[root]<arr[left])
           {
               swap(root,left);
           }
            
           if(arr[root]<arr[right])
           {
               swap(root,right);   
           }
           
           if(in!=root)
           {
               test=1;
               swap(arr[in],arr[root]);

           }
            if(test==1)
            {
				printDescendingOrder(root);
            }


        return;

}

int main(void)
{
    
    while(true)
    {
        cout <<"What do you want to do?\n1.Construct Heap\n2.Insert\n3.Print Descending Order\n4.Print Heap\n5.Exit" <<endl;
        int n;
        cin>> n;
		
		if (n==5) break;
		
		else if(n==1)
		{
			int number,index=0;

			cin>>number;

			arr[index]=number;
			index++;

			while(number!=0)
			{
				cin>> number;
				arr[index]=number;
				index++;

				Heapify(index-1);

			}
			point = index-1;
		
		
		}

       else if(n==2)
        {
            cout << "Enter number you want to insert : ";
            int num;
            cin >> num;
            arr[point]=num;

            test=point;
           
            Heapify(test);
            point++;
        }
        else if(n==3)
        {
            point--;

            while(point!=0)
            {
              	cout << arr[0]<<" ";
              	
                arr[0]=arr[point];
                arr[point]=0;
                
                 printDescendingOrder(0);
                 point--;
            }
            cout << arr[0]<<endl;



        }
        
        else if(n==4)
           {
           		Print(arr);
           }
        

		else
			cout<< "Wrong input!\nTRY AGAIN!" << endl;
    }

    return 0;


}
