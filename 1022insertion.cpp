#include <bits/stdc++.h>

using namespace std;


void insertionSort(int arr[], int n)
{
   int i, point , j;
   for (i = 1; i < n; i++)
   {
       point = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > point)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = point;
   }
}
 
void printArray(int arr[], int n)
{
   int i;
   
   for (i=0; i < n; i++)
       cout << arr[i] << " ";
   
   cout << endl;
}
 
int main(void)
{
    int arr[] = {78,9,7,56,64,23,102,2,6,2};
    
    int n = sizeof(arr)/sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
