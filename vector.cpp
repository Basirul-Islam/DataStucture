#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> myVec;

    while(true)
    {
        int input;
        
        cin >> input;
        
        if(input==0) break;
        
        myVec.push_back(input);
    }

    vector<int> :: iterator it;
    
    for(it=myVec.begin();it!=myVec.end();it++)
    {
        cout << *it <<endl;
    }

    myVec.erase(myVec.begin()+3, myVec.end()-2);

    for(int i=0;i<myVec.size();i++)
    {
        cout << myVec[i] << endl;
    }
    //myVec.clear();

    //for(int i=0;i<myVec.size();i++)
    //{
        cout << myVec.back() << endl;
        myVec.pop_back();
    //}

    for(int i=0;i<myVec.size();i++)
    {
        cout << myVec[i] << endl;
    }
    return 0;
}
