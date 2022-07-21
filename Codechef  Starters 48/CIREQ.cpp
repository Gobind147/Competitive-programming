#include <bits/stdc++.h> 
using namespace std; 
 
 
int main(){ 
    
    long long t; 
     
    cin>>t; 
    while(t--){ 
  int n; 
    cin>>n; 
    int a[n]; 
    int arr[n];
    multiset<int> s; 
    for (int i=0;i<n;i++) { 
        cin>>a[i]; 
        s.insert(a[i]); 
    } 
    long long r = 1; 
    long long p = 1;
    long long num=0;
    long long count=0;
    while (s.size()>0){ 
        auto i = s.lower_bound(p); 
        if (i!=s.end()){ 
             
            s.erase(i); 
            p++; 
            num++;
        } 
        else{ 
            p = 1; 
            r++;
            count++;
        } 
    } 
    cout<<r<<endl;  
 } 
}
