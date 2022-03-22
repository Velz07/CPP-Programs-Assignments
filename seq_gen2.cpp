#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int seq()
{
static int value=1;
static int count =1;

while(count!=0)
{
    count-=1;
return(value);
}

count=value;
value+=1;
return(value);


}
int main()
{

for(int i=0;i<=10;i++)
{
    cout<< seq()<<" ";

}


return(0);

}



