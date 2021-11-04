#include<iostream>
#include<queue>

using namespace std;

struct compare
{
    bool operator()(const &a, const &b) const
    {
        return a>b;
    }
};

int main()
{
    priority_queue<int, vector<int>, compare > pq;
    pq.push(8);
    pq.push(1);
    pq.push(3);
    while(!pq.empty())
    {
        cout<< pq.top() <<endl;
        pq.pop();
    }
    return 0;
}
