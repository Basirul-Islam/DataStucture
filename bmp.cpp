#include<iostream>
#include<fstream>

using namespace std;

char ch[512*513];

int main()
{
    ifstream iFile;
    iFile.open("lena_gray.bmp",ios::binary);

    ofstream oFile;
    oFile.open("neg.bmp", ios::binary);

    if(iFile.is_open() && oFile.is_open())
    {
        int i=0;
        iFile.get(ch[i]);

        while(!iFile.eof())
        {
            i++;
            iFile.get(ch[i]);
        }
        int size=i+1;
        cout << size << endl;

        for(int j=0;j<512*512;j++)
        {
            //int iValue = (int) ch[i];
           // if(iValue<0) iValue+=255;
           // int oValue = 255-iValue;
           // char oCharValue=(char)oValue;
            ch[i]=255-ch[i];//oCharValue;
            i--;
        }

        for(int k=0;k<size;k++)
        {
            oFile <<ch[k];
        }
        iFile.close();
        oFile.close();
    }
    else
    {
        cout << "Could not open file" << endl;
    }
    return 0;
}
