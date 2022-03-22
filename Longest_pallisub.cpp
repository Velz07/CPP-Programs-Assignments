#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

string chk_pallindrome(string sub)
{
    for(int i=0;i<=sub.length()-1;i++)
    {
        if(sub[i]!=sub[sub.length()-1-i])
            return("No");
    
            
    }

return(sub);
    
}

int main()
{
        

string s="a";
string ret="";
string max1="";

if(s.length()==1)
    cout<<(s);
else {
        for(int i=0;i<=s.length()-2;i++)
        {   
            
            for(int j=s.length()-1;j>=i+1;j--)
            {
                //printf("i,j %d,%d\n",i,j);
                //cout<<s.substr(i,j-i+1)<<"----";
                
                ret=chk_pallindrome(s.substr(i,j-i+1));
                if(ret!="No" && ret.length()>max1.length())
                    max1=ret;
                //cout<<endl;
            }
        
        }


cout<<"Longest Pallindrome "<<max1;
}

return(1);
}