#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{

int a=15,b=2;
int c,count=0;

c = a^b;

while(c!=0)
{
    count = count + (c&1);
    c = c>>1;
}

cout<<"Hamming Distance: "<<count;

return(1);

}

