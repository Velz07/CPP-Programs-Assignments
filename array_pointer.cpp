#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{

int n;
int k;
int value;
cout<<"enter size ";
cin>>n;
int *a[n];

for(int i=0;i<=n-1;i++)
{
    printf("Enter array size of %d ",i+1);
    cin>>k;
    a[i] =(int*)calloc(k,sizeof(int));
    for(int j=0;j<=k-1;j++)
    {
        printf("Enter value of %d,%d ",i,j);
        cin>>value;
        a[i][j]=value;
    }
}


cout<<"size= "<<sizeof(a[0])<<endl;
cout<<"size= "<<sizeof(a[1]);
/*
for(int i=0;i<=n-1;i++)
{
    printf("array %d ",i+1);
    cout<<endl;
    for()
    {
       cout<<*j<<",";
    }
    cout<<endl;
}

//size
cout<<"Size= "<<a.size();

*/
return(1);




}