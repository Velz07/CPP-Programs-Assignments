#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int seq(int index)
{
static int value=1;
static int count =0;



if(count%2==0 && count!=0)
value+=1;

count+=1;
return(value);

}
int main()
{

for(int i=0;i<=10;i++)
{
    cout<< seq(i)<<" ";

}


return(0);

}



