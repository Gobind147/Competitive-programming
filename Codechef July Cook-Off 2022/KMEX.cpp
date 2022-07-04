#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
   int t;
   cin >> t;
   while(t--){
       int n,m,k;
       cin>>n>>m>>k;
       int arr[n];
       ll d=0;
       long long h=0;
       map<int,int>ar;
       for(int i=0;i<n;i++){
           cin>>arr[i];
           ar[arr[i]]++;
       }
       int count=0;
       bool x=true;
       for(int i=0;i<k;i++){
           
           if(i<k && ar[i]==0){
              x=false;
              d++;
              break;
           }
           count+=ar[i];
           
       }
       for(int i=k+1;i<=n;i++){
           count+=ar[i];
           if(count>=m){
               h++;
               break;
           }
           
       }
      if(count>=m && x && m>=k)
      {
      cout<<"yes"<<endl;
      }
      else
      {
       cout<<"no"<<endl;
      }
 
       
   }
   
    
    return 0;
}
