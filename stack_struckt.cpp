#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{

struct node
{
    int data;
    *node next_node=NULL;

};

*node front,rear;

front=NULL;
rear=NULL;

//insert
node ele;

if(front==NULL)
    front = &ele;
    rear = front;
else
    rear->next_node = &ele;
    rear =  &ele;
    ele.next_node = front; //circualar queue

//dele ele
if(front == NULL)
    //error
else
    if(front==rear)
        front=NULL;
        rear=NULL;
    else
        read_qdata = front.data;
        front = front->next;

//del circular queue
if(front==NULL)
    //error
else

//front        
//node1,node2,node3
//            front
    node *p=NULL;
    k=1;
    p=front;
    while(1)
    {
    
        if(k==n-1)
            p->next = p->next->next;
            break;


    p=p->next_node;
    k++;

    if(p==front)
        break;
    }
//read_quee
if(front == NULL)
    //error
else
    read_qdata = front.data;


//





    return(1);
}