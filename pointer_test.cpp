#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int *c,int *d)
{
		
	*c=*c + *d;
	*d=*c - *d;
	*c=*c - *d;

}
int main()

{
	
	
int *a,*b;


*a=5;
*b=6;

cout<<*a<<" "<<*b;
//swap(a,b);


	
	
	return(1);
}