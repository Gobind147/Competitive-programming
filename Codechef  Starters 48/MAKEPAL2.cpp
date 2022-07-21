#include <bits/stdc++.h> 
using namespace std; 
 

 
int main(){ 
    
    long long t; 
    long long count=0;
    
    cin>>t; 
    while(t--){ 
   int n; 
    cin>>n; 
    string s;
    string nk;
    int arr[n];
    cin>>s; 
    long long pk = 0, kk = 0; 
    long long num=0;
    for (auto i:s){ 
        if (i=='0') pk++; 
        else kk++; 
    } 
    string r; 
    if (kk>pk){ 
        for (int i=0;i<kk;i++){ 
            r += '1'; 
            count++;
            
        } 
    } 
    else{ 
        for (int i=0;i<pk;i++){ 
            r += '0'; 
            num++;
        } 
    } 
    cout<<r<<endl;  
 } 
}
