#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,k;

    cin>>n>>k;
    int **a = new int*[n];
    int kval;  
    int p,q;
    
    
    for(int i=0;i<=n-1;i++)
    {
        cin>>kval;
        a[i] = new int[kval];
        for(int j=0;j<=kval-1;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }


for(int i=0;i<=k-1;i++)
{
    cin>>p>>q;
    
    cout<<a[p][q]<<endl;
}

    return 0;
}