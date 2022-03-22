#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{

int n=7;

for(int i=1;i<=n;i++)
{
    if(i<=n/2)
    //n-1,n-2,n-3
    for(int k=1;k<=n-i;k++)
    printf(" ");

    //print pattern
    for(int k=1;k<=i;k++)
    if(i==1)
        printf("*");
    else
        printf("* ");

    cout<<endl;
}

    return(1);
}