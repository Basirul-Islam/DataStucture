#include<iostream>

using namespace std;


int arr*;
/*
delete:
        first;
        last;
        at some index;
        some value;
        delete all value;
bubble sort;
*/

int travarseAndInitialize(int size)
{
    size=5;
    arr=new int[size];
    //initialize
    for(int i=0;i<size;i++)
    {
        arr[i]=i*5;
    }
    int filledTo=size-1;
    return filledTo;
}

void enlargeArray()
{
    int newSize=size*2;
    int *newArray = new int[newSize];
    for(int i=0;i<=filledTo;i++)
    {
        newArray[i]=arr[i];
    }
    delete [] arr;
    arr = newArray;
    size = newSize;
}

void shrinkArray()
{
    int newSize=size/2;
    int *newArray = new int[newSize];
    for(int i=0;i<=filledTo;i++)
    {
        newArray[i]=arr[i];
    }
    delete [] arr;
    arr = newArray;
    size = newSize;
}

void printArray(int size, int filledTo)
{
    cout << "Printing" <<endl;
    for(int i=0;i<=filledTo;i++)
    {
        cout << arr[i] <<"\t";
    }
    cout <<endl << "Size " << size << " Filled To " <<filledTo <<endl;
}

bool isArrayFull(int size,int filledTo)
{
    if(filledTo==size-1) return true;
    else return false;
}

bool boundaryCheckIndex(int size, int filledTo, int index)
{
    if(isArrayFull(size,filledTo)||index<0||index>filledTo+1) return true;
    else return false;
}

int search(int filledTo, int beforeValue)
{
    for(int i=0;i<=filledTo;i++)
    {
        if(arr[i]==beforeValue) return i;
    }
    return -1;
}

void makeSpaceAT(int index, int &filledTo)
{
    for(int i=filledTo+1;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    filledTo++;
    arr[index]=-1;
}

bool insertAtTheEnd(int size, int &filledTo, int itemTobeInserted)
{
    if(isArrayFull(size,filledTo)) return false;
    filledTo++;
    arr[filledTo]= itemTobeInserted;
    return true;
}

bool insertAtTheBeginning(int size, int &filledTo, int itemTobeInserted)
{
    if(isArrayFull(size,filledTo)) return false;
    makeSpaceAT(arr,0,filledTo);
    arr[0]=itemTobeInserted;
    return true;
}

bool insertAtIndexPosition(int size, int &filledTo, int itemTobeInserted, int index)
{
    if(boundaryCheckIndex(size, filledTo, index)) return false;
    if(index<=filledTo)
    {
        makeSpaceAT(arr,index,filledTo);
    }
    else {
        filledTo++;
    }
    arr[index] =itemTobeInserted;
    return true;
}

bool insertBeforeValue(int size, int &filledTo, int itemTobeInserted, int beforeValue)
{
    if(isArrayFull(size,filledTo)) return false;
    int index=search(arr, filledTo, beforeValue);
    if(index==-1) {
        cout << beforeValue << " Not Found" << endl;
        return false;
    }
    makeSpaceAT(arr,index,filledTo);
    arr[index]=itemTobeInserted;
    return true;
}

bool insertAfterValue(int size, int &filledTo, int itemTobeInserted, int afterValue)
{
    if(isArrayFull(size,filledTo)) return false;
    int index=search(arr, filledTo, afterValue);
    if(index==-1) {
        cout << afterValue << " Not Found" << endl;
        return false;
    }
    makeSpaceAT(arr,index+1,filledTo);
    arr[index+1]=itemTobeInserted;
    return true;
}


int main()
{
    int size=100;
    int arr[100];
    int filledTo=0;
    filledTo =travarseAndInitialize(arr,size);
    return 0;
}
