#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class stack
{
	public:
	int top,bottom,size;
	int *stack_list;
	stack(int size1)
	{
		
		size=size1;
		stack_list = (int*)calloc(size,sizeof(int));
		top=-1;
		bottom=-1;
	}
	

	void push(int data)
	{
		if(top==size)
		{
			cout<<"\nStack Full-  "<<size<<"  "<<top<<"\n";
		}
		else
		{
		
			stack_list[top] = data;
			top = top +1;
			cout<<"Push Success \n";
		}
			
	}
	
	void pop()
	{
		if(top==bottom && top==-1)
		{
			cout<<"\n Empty Dude\n";
		}
		else
		{
			
			cout<<"Popped Value: "<<stack_list[top-1];
			top=top-1;
		}
		
		
	}
	
		
	void print_stack()
	{
	
		int idx = top;
		
		if(idx == size)
			idx = size-1;
			
		while(idx!=-1)
		{
		
		 printf("\nIndex %d : Value %d\n",idx,stack_list[idx]);
		 idx--;
		 
	}
		
		
		}	
	
};


int main()
{
	
	stack s1(5);
	
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

s1.print_stack();
	s1.pop();	
	s1.pop();
	s1.pop();
	s1.pop();
	
	return(1);
}