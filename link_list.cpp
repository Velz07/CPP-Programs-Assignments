#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 100;

class stack
{
    int top;
    public:
    int mem[MAX];

    stack()
    {
        top=-1;

    }

    bool push(int x)
    {
        if(top==-1)
        {
            cout<<"stack empty";
            return(false);
        }
        else
        {
            top=top+1;
            mem[top] = x;
            return(true)
        }

    }



}
