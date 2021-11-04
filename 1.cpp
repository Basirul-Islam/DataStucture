#include <bits/stdc++.h>

using namespace std;



int main(void)

{
	
	ifstream iFile;
	iFile.open("image2.bmp", ios::binary);
	if(iFile.is_open())
	{
	
		char ch;
		iFile.get(ch);
		
		while(!iFile.eof())
		{
			cout << ch;
			iFile.get(ch);
			
		}
		
		
		iFile.close();
	}
	else
		cout << "can't open input file!" << endl;
	
	
	return 0;

}
