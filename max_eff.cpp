#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	
	int a[]={-5,3,4,-2,1};
	
	int f=0,s=-1;
	
	for(int i=1;i<=sizeof(a)/sizeof(int)-1;i++)
	{
		if(a[i]>a[f])
			{
				s=f;
				f=i;
				
			}
		else 
			if(s==-1 || a[s]<a[i])
				s=i;
				
		
		
		
		
		}
		
		
	printf("f:%d:%d-----s:%d:%d",f,a[f],s,a[s]);
	
	
	
	return(1);
}