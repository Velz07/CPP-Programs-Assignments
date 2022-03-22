#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//Queue

int main()
{
	
	int a[]={7,1,2,3,6,7,5,4};
	
	int first,second,third;
	
	first=0;
	second=-1;
	third=-1;
	
	for(int i=1;i<sizeof(a)/sizeof(int);i++)
	{
		
		if(a[i]>a[first])
		{
			
			third = second;	
			second = first;
			first = i;
			
					
		}
		
		else if(second ==-1 || a[i]>a[second] && a[i]!=a[first])
		{
			third = second;			
			second = i;
			
			
		}
		
		else if(third == -1 || a[i] > a[third] && a[i]!=a[first] && a[i]!=a[second])
		{
			
			third = i;
			
		}

printf("Iteration %d\n",i);		
printf("first = %d,second = %d,third = %d \n",first,second,third);	
}


//printf("first = %d,second = %d,third = %d",first,second,third);
return(1);

}
	
	
	