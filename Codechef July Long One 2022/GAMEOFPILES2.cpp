#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  // your code goes here
  long long t;
  cin>>t;
  while(t--)
  {
     long long n;
     cin>>n;
     long long arr1[n];
     long long ars[n];
     long long u=0,v=0,w=0,x=0,y=0;
     long long count1=0;
     long count2=0;
     for(int i=0 ; i<n ; i++)
     {
         cin>>arr1[i];
         if(arr1[i]==1)
         {
             w++;
             count1++;
         }
         else
         {
             if(arr1[i]==2)
             {
                 v++;
                 count2++;
             }
               x+=arr1[i];
               y++;
              if(arr1[i]%2)
               {
                    u++;
              }
         }
         
     }
     if(w==1)
     {
         if(!(u % 2))
         {
             cout<<"CHEF"<<endl;
             continue;
         }
         if( v == 0 )
         {
             cout<<"CHEFINA"<<endl;
             continue;
             
         }
         x-=2;
         y--;
         if((x-y)%2)
         {
            cout<<"CHEFINA"<<endl;
            continue;
         }
         else
         {
             cout<<"CHEF"<<endl;
             continue;
         }
     }
     else if(w>1)
     {
         if((x-y)%2)
         {
             cout<<"CHEF"<<endl;
             continue;
         }
         else
         {
            cout<<"CHEFINA"<<endl;
            continue;
         }
     }
     if(u%2)
     {
            cout<<"CHEF"<<endl;
            continue;
     }
     else
     {
             cout<<"CHEFINA"<<endl;
             continue;
     }
     
  }
  return 0;
}
