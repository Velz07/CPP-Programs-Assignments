#include <iostream>
#include <stdlib.h>
using namespace std;
int main() 
{

int n;
cout<<"enter n";
cin>>n;

int *arr[n];
//int *k = (int*)calloc(n,sizeof(int));
int k[n];

for(int i=0;i<=n-1;i++)
{
    cout<<"enter size for i="<<i<<endl;
    cin>>k[i];
    arr[i] = (int*)calloc(k[i],sizeof(int));

    for(int j=0;j<=k[i]-1;j++)
    {
        cout<<"enter value for arr "<<i<<","<<j<<endl;
        cin>>arr[i][j];
    }

}


for(int i=0;i<=n-1;i++)
{

    for(int j=0;j<=k[i]-1;j++)
    {
        cout<<"value at arr "<<i<<","<<j<<"=";
        cout<<arr[i][j]<<endl;
    }
}


return(0);

}