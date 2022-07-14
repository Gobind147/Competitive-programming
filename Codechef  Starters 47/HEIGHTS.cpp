#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
     
    long long t; 
    cin>>t; 
    while(t--){ 
  long long n; 
    cin>>n; 
    int arr[n];
    vector<int> ar(n,0); 
    unordered_map<int,int> count; 
    int mx = 0; 
    for (int i=0;i<n;i++) { 
        cin>>ar[i]; 
        count[ar[i]]++; 
        mx = max(mx , ar[i]); 
    } 
    long long res = 0; 
    int mt = 0; 
    long long num=0;
    for (auto i:count){ 
        if (i.second == 1) res ++; 
        mt = max(mt , i.second); 
        num++;
    } 
    if (res%2){ 
        long long f = (res+1); 
        long long k= f/2;
        long long hk=0;
        if (count[mx]==1) { 
            
            if (mt==2) k++; 
            hk++;
        } 
 
        cout<<k<<endl; 
    } 
    else{ 
        int k = res / 2 ; 
        cout<<k<<endl; 
    }  
 } 
 return 0;
}
