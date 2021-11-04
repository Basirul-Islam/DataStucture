#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int arr[], int num, int beg, int end)
{
 int mid;
 
 if (num > end)
 {
  
  cout << "Number is not found";
  return 0;
  
 } 
 else 
 {
  
  mid = (beg + end) / 2;
  
  if(arr[mid] == num)
  {
   
   cout << "Number is found at " << mid << " index \n";
   return 0;
  
  } 
  else if (num > arr[mid]) 
  {
   
   BinarySearch (arr, num, mid+1, end);
   
  }
   else if (num < arr[mid])
    {
  		 BinarySearch (arr, num, beg , mid-1);
  	}
 }
 
 
}
 
int main() {
 
 int num, i, n, beg, end;
 int arr[10]={1,2,3,4,5,6,7,8,9,10};

 
 cout << "Enter a value to be search " << endl;
 
 cin >> num;
 
 beg = 0;
 end = 10-1;
 
 BinarySearch (arr, num, beg, end);
 
 return 0;
}

