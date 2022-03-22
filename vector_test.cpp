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
vector<int> a[n];

for(int i=0;i<=n-1;i++)
{
    printf("Enter array size of %d ",i+1);
    cin>>k;
    for(int j=0;j<=k-1;j++)
    {
        printf("Enter value of %d,%d ",i,j);
        cin>>value;
        a[i].push_back(value);
    }
}

for(int i=0;i<=n-1;i++)
{
    printf("array %d ",i+1);
    cout<<endl;
    for(auto j=a[i].begin();j!=a[i].end();++j)
    {
       cout<<*j<<",";
    }
    cout<<endl;
}

//size
cout<<"Size= "<<a.size();


return(1);




}