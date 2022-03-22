#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//Queue
struct node
{
	int data;
	node *nxt_node;
	
};
node *front=NULL,*rear=NULL;
void disq()
{
	
	if(front==NULL)
		cout<<"\nQ is empty dude\n";
	
	else
	{
		
		int sno=1;
		node *p=front;
		while(p!=NULL)
		{
			cout<<endl<<sno<<" : "<<p->data;
			
			p = p->nxt_node;
			sno++;
		}
		
	}
	
	
}
void enq(int data)
{
	
	if(front==NULL)
		{
			//first insert
			node *temp;
			
			temp = (node*)calloc(1,sizeof(node));
			
			temp->data = data;
			
			front = temp;
		
			rear = temp;	
			
			cout<<"\nInsert SUCCESS - "<<front<<endl;
			

				
			disq();				
			
		}
	else
	{
		if(rear->nxt_node == NULL)
			{
			node *temp;
			temp = (node*)calloc(1,sizeof(node));
			

			temp->data =  data;
			
			rear->nxt_node = temp;
			rear = temp;
				
			
			cout<<"\nInsert SUCCESS-V2\n";
			disq();
				
			}
		else
			cout<<endl<<"NULL not found at rear - check point";
		
	}
		
	
} 



void dq()
{
	if(front==NULL)
		cout<<"\n empty bullshit\n";
	else if(front == rear)
		front=NULL;
	else
	{
		front = front->nxt_node;
		
		cout<<"\nAfter Deletion\n";
		disq();
	}
	
	
}


int main()
{
	



//front->node1->node2->node3->node4 <-rear



disq();
enq(1);
enq(2);

enq(3);

enq(4);
enq(5);

dq();

	
	return(1);
}