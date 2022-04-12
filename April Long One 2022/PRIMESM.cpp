#include <iostream>
using namespace std;

long long primesom(long long z, long long j)
{
    if (z == 0)
    {
       return j;
    }
    else if (j == 0)
    {
       return z;
    }
  
     
    else if (z == j){
        return z;
    }
   
    else if (z > j)
    {
        return primesom(z-j, j);
    }
    return primesom(z, j-z);
}
  
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--)
 {
     long long l,v;
     cin>>l>>v;
     long long kk = primesom(l,v);
     if(l==1 || v==1)
     {
         cout<<"-1"<<endl;
     }
    else
    {
        if(kk != 1)
        {
             cout<<"0"<<endl;
        }
        else
        {
             cout<<"1"<<endl;
        }
    }
 }
 return 0;
}
