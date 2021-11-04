#include<bits/stdc++.h>

using namespace std;
 


int Max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
 
void CountSort(int arr[], int n, int exp)
{
    int output[n],i, count[10] = {0};
 
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        
        count[ (arr[i]/exp)%10 ]--;
    }
 
    
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void Radixsort(int arr[], int n)
{
    int p = Max(arr, n);
 
    for (int exp = 1; p/exp > 0; exp *= 10)
        CountSort(arr, n, exp);
}
 
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
        
}
 

int main(void)
{
    int arr[] = {5,78,95,102,112,45,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    Radixsort(arr, n);
    Print(arr, n);
    
    return 0;
}



