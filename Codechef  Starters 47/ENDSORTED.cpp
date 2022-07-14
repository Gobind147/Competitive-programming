#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    
    long long t; 
     
    cin>>t; 
    while(t--){ 
  long long n; 
   cin>>n; 
   long long arr[n];
   vector<int> arr1(n,0); 
   long long count1, countn; 
   long long num;
   for (int i=0;i<n;i++) { 
    cin>>arr1[i]; 
    if (arr1[i] == 1) count1 = i; 
    if (arr1[i]==n) countn = i; 
   } 
   long long res = 0;
   long long rr=0;
   if (count1==0 && countn==n-1) 
   res = 0; 
   else if (count1==0 and countn!=n-1) 
   res = n-1 - countn; 
   else if (count1!=0 and countn==n-1) 
   res = count1; 
   else{ 
        res = n-1 - countn + count1; 
        if (countn<count1) res-=1;
        num++;
   } 
   cout<<res<<endl;  
 } 
 return 0;
}
