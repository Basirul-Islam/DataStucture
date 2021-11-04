#include <bits/stdc++.h>
 
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 

void bubbleSort(int arr[], int n)
{
   int i, j;
   
   for (i = 0; i < n-1; i++)      
 	{
       
       for (j = 0; j < n-i-1; j++) 
       {
           if (arr[j] > arr[j+1])
           {
              swap(&arr[j], &arr[j+1]);
           }
       }
    }
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
    	cout << arr[i] << " " ;
    }
    cout << endl;
 
}
int main(void)
{
    int arr[] = {6, 38, 256, 102, 23, 19, 90};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    cout << "Sorted Array is given below:" << endl;
    
    printArray(arr, n);
    
    return 0;
}

