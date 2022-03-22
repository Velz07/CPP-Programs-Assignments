#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main()
{

string a;
int i,j;
getline(cin,a); 

for(i=a.length()-1;i>=0;i--)
{
    if(a[i] ==' ' || i==0)
    {
        if(i==0)
        j=i;
        else
        j=i+1;
        while(a[j]!=' ' && a[j]!='\0')
        {
            cout<<a[j];
            j=j+1;
        }
        
        cout<<" ";
    }
}

return -1;
}
