#include <iostream>

using namespace std;
int main() 
{
//5,2,1,3,4

int tmp;
int x[5];
//input
cout<<"Enter No list";
for(int k=0;k<=4;k++)
cin>>x[k];

//sorting
for(int i=1;i<=4;i++)
{

for(int j=i;j>=0;j--)
{
    if(x[j]<x[j-1])
    {
        tmp=x[j];
        x[j]=x[j-1];
        x[j-1]=tmp;

    }

}

for(int k=0;k<=4;k++)
cout<<x[k];   

cout<<endl;




}

    return 0;
}
