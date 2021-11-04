#include<bits/stdc++.h>
 
using namespace std;
 

void CounterSort(int a[], int n, int r, int lower)
{
	int i, j = 0, counter[r] = {0};	
	
	for(i=0; i<n; i++)
		counter[a[i]-lower]++;
 
	i=0;

	while(i < r)
	{
		flag:
		a[j] = lower+i;
		j++;
		counter[i]--;
 
		
		if(counter[i] > 0)
		goto flag;
 
		i++;
	}
}
 
int main()
{
	int n, i, range, ulimit, llimit;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	cout<<"\nEnter the lower and upper limit of the data to be entered: ";
	cin>>llimit>>ulimit;
 
	
	range = ulimit-llimit+1;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
 
	CounterSort(arr, n, range, llimit);
 

	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        	cout<<"->"<<arr[i];
 
	return 0;
}
