#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

void printq(queue<int> *g)
{

    while(!g->empty())
    {
        cout<<g->front()<<" ";
        g->pop();
    }

    cout<<'\n';

}

int main()
{

queue<int> q1;

q1.push(10);
q1.push(20);
q1.push(39);

printq(&q1);

printq(&q1);




}