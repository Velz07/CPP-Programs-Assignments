#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//Queue

int main()
{
	
	int a[]={7,1,2,3,6,7,5,4};
	
	int first=0,second=-1;
	
	for(int i=1;i<=sizeof(a)/sizeof(int) -1;i++)
		{
			if(a[i]>a[first]  )
			{
				cout<<"enter1\n";
				second=first;
				first=i;
			}
			else {
				
				if(second==-1) {
					second = i;
				else if(a[i]>a[second] && a[i]!=a[first])
					second = i;
		
			
		}
		
			
	printf("first:%d,second:%d \n",first,second);	
			
			
		}
		
	printf("Max1:%d,Max2:%d",a[first],a[second]);

	return(1);
}