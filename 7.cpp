#include <bits/stdc++.h>

using namespace std;



int main(void)

{
	
	ifstream iFile;
	iFile.open("image2.bmp", ios::binary);
	if(iFile.is_open())
	{
	
		ofstream oFile;
		oFile.open("oimg2.bmp", ios::binary);
		if(oFile.is_open())
		{
			
			char ch;
			iFile.get(ch);
		while(!iFile.eof())
		{
			oFile << ch;
			iFile.get(ch);
			
		}
		
		}
		
		oFile.close();
		iFile.close();
	}
	else
		cout << "can't open input file!" << endl;
	
	
	return 0;

}
