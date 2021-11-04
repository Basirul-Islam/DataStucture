#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> stl_queue;
    stl_queue.push(8);
    stl_queue.push(1);
    stl_queue.push(3);
    while(!stl_queue.empty())
    {
        cout<< stl_queue.front() <<endl;
        stl_queue.pop();
    }
    return 0;
}
