#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main()
{

string a;
int i,j,c=0;
getline(cin,a);

string word("there");
string tmp;
for(i=0;i<=a.length()-1;i++)
{

if(a[i]!=' ' && a[i]!='\0')
tmp =  tmp + a[i];
else
{
cout<<tmp<<endl;   

if(tmp==word)
   {
    c++;
   }
tmp="";


}



}

cout<<c;
return -1;
}
