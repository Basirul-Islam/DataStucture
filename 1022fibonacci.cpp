#include<iostream>
 
using namespace std;
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    int n,i=0;
    
    cout << "Input the number of terms for Fibonacci Series:" << endl;
    
    cin>>n;
    
    cout<<"Fibonacci Series is as follows" << endl;
 
    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
    
    cout << endl;
 
    return 0;
}
