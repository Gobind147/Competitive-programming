#include <bits/stdc++.h> 
using namespace std; 
 
 
int main(){ 
    long long t; 
    cin>>t; 
    while(t--){ 
  long long n,m;
  long long num=0;
    cin>>n>>m; 
    long long h=0;
    long long count = 0;
    int arr[n];
    if (n%2==0 && m%2==0){ 
        count = 0; 
    } 
    else if (n%2==1 || m%2==1){ 
        if (n%2==1 && m%2==1){ 
            count += n + m - 1; 
            num++;
        } 
        else{ 
            if (n%2) count += m; 
            else count += n;
            h++;
        } 
    } 
    cout<<count<<endl;  
 } 
}
