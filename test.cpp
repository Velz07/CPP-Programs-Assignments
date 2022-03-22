#include <iostream>
#include <stdlib.h>
using namespace std;
int main() 
{

int n=3,k=2;

int (*arr)[n];

arr[0] = (int *)malloc(5*sizeof(int));
arr[1] = (int *)malloc(6*sizeof(int));
arr[2] = (int *)malloc(7*sizeof(int));

cout<<sizeof(*(arr+1));

return(0);

}