#include<iostream>
#include<fstream>

using namespace std;


int main() {
    ifstream iFile;
    int u;
    char c;
    char ch[512*512];
    iFile.open("lena_gray.bmp", ios::binary);

    ofstream oFile;
    oFile.open("newBMP.bmp", ios::binary);

    if(iFile.is_open() && oFile.is_open())
    {
        for(int i=0;i<512*512;i++)
        {
            iFile.get(ch[i]);
        }

        for(int i=512*512;i>14;i--)
        {
            u = int(ch[i]);

            if(u<0) u+=255;

            u = 255-u;

            c = char(u);

            oFile << c;
        }
        iFile.close();
        oFile.close();
    }
    else {
        cout << "Could not open file" << endl;
    }
    return 0;
}
