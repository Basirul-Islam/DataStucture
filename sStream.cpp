#include<iostream>
#include<sstream>

using namespace std;

int main (void)
{
	int n,a=0;
	
	cin >> n;
	
	string s,p;
	
	getline(cin,p);

	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		istringstream iss(s);
		
		string word;
	
	
		while(iss >> word)
		{
			a++;
			cout << word << endl;
		}
		cout << a << endl;
	}
	
	return 0;
}
