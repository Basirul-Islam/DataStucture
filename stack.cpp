 #include<bits/stdc++.h>
 
 using namespace std;
 
 int in=0;
 
 int* Insert(int *arr)
 {
 	int element;
 	
 	cout << "enter element " << endl;
 	
 	cin >> element;
 	arr[in]=element;
 	in++;
 	
 	return arr;
 	 
 }
 
 int* Delete(int *arr)
 {
 	
 	arr[in]= -1;
 	
 	in--;
 	
 	return arr;
 	 
 }
 
void Display(int *arr)
{
	for(int counter = in ;counter >= 0;counter--)
	{
		cout << arr[counter] << endl;
	}

}
 
 
 int main(void)
 {
 	int size,input;
	
	cout << "Enter Array size: " << endl;
	cin >> size;
	
	int arr[size];
	
	while(true)
	{
	
	cout << "What do you want to do??\n 1.insert element\n 2.delete element\n 3.Look in Stack\n 4.Exit" << endl;
	
	cin >> input;
	
	if(input == 1)
	{
		Insert(arr);
	}
	
	else if (input ==2)
	{
		Delete(arr);
	}
 	else if (input ==3)
	{
		Display(arr);
	}
	else if(input==4)
		break;

	else
		cout << "Invalid input!" << endl;
	}
 	
 	return 0;
 }
