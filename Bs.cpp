#include <bits/stdc++.h>

using namespace std;


 
int main() 
{
 
 int num, mid, beg, end;
 int arr[10]={1,2,3,4,5,6,7,8,9,10};

 
 cout << "Enter a value to be search " << endl;
 
 cin >> num;
 
 beg = 0;
 end = 10-1;
 mid=(beg+end)/2;
 
 while(num!= arr[mid])
 {
 	if(num > arr[mid])
 	{
 		beg=mid;
 		end=end;
 		mid=(beg+end)/2;
 		
 	}
 	
 	else if(num < arr[mid])
 	{
 		end=mid;
 		beg=beg;
 		mid=(beg+end)/2;
 		
 	}
 
 }

 cout << num << " is found at " << mid <<" index" << endl;
 
 return 0;
}

