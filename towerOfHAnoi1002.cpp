#include<iostream>
using namespace std;
int pos=0;
int towerOfHanoi(int n, char fromRod, char toRod, char auxRod)
{
    if (n == 1)
    {
        cout<<" Move disk 1 from rod "<<fromRod<<" to rod "<< toRod<<endl;
        pos++;
        return pos;
    }
    else 
    {
      towerOfHanoi(n-1, fromRod, auxRod, toRod);
      cout<<" Move disk "<<n<<" from rod "<<fromRod<<" to rod"<<toRod<<endl;
      pos++;
      towerOfHanoi(n-1, auxRod, toRod, fromRod);
    }
    return pos;
}

int main()
{
    int n;
    cin>>n;
    int step;
    
    step=towerOfHanoi(n, 'A', 'C', 'B');
    cout<<step<<endl;
    return 0;
}

