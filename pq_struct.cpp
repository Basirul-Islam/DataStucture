#include<iostream>
#include<queue>

using namespace std;

struct people
{
    int age;
    int salary;
    bool operator<(const people &p) const
    {
        if(salary==p.salary)
        {
            return age>p.age;
        }
        else
        {
            return salary>p.salary;
        }
    }
};

int main()
{
    priority_queue<people> pq;
    people p1,p2,p3;
    p1.age=10;
    p1.salary=200;
    p2.age=20;
    p2.salary=200;
    p3.age=15;
    p3.salary=300;
    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    while(!pq.empty())
    {
        people p=pq.top();
        cout<< p.age << " ";
        cout<< p.salary <<endl;
        pq.pop();
    }
    return 0;
}
