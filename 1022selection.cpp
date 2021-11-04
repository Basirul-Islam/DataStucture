#include <bits/stdc++.h>

using namespace std;


selectionSort(int arr[],int n)
{

	for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        loc=i;
        
        for(int j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
 

}

printArray(int arr[],int n)
{
	cout << "\nSorted list is as follows" << endl;
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
	 cout << endl;
}

int main(void)

{
	 int n,loc,temp,min,arr[100];
	 
    cout << "Enter the number of elements between 1-100:" << endl;
    
    cin >> n;
    
    cout << "Enter the elements" << endl;
 
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
 
    selectionSort(arr,n);
    printArray(arr,n);
    
	return 0;

}







/*#include <bits/stdc++.h>

using namespace std;

int main(void)

{
	 int i,j,n,loc,temp,min,arr[100];
	 
    cout << "Enter the number of elements between 1-100:" << endl;
    
    cin >> n;
    
    cout << "Enter the elements" << endl;
 
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        loc=i;
        
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
 
    cout << "\nSorted list is as follows" << endl;
    
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
	 cout << endl;
	return 0;

}
*/
