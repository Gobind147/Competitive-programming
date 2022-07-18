#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
 // your code goes here
 int t,n;
 string sr;
 cin>>t;
 while(t--)
 {
     int count=0;
     int num=0;
     int kg=0;
     cin>>n;
     cin>>sr;
     for(int i=0;i<n;i++)
     {
        if(count>3)
        {
            break;
        }
        if(sr[i]=='a'|| sr[i]=='e' || sr[i]=='i' || sr[i]=='o' or sr[i]=='u' )
         { count=0;
         num++;
         }       
            else{
             count++;
        }
     }
     if(count<=3)
         cout << "YES" << endl;
     else
         cout << "NO" << endl;
     
 }
 return 0;
}
