#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
     
     
    long long t; 
    cin >> t; 
    while(t--){ 
        long long  n; 
        long long count=0;
        long long num=0;
        int arr[n];
    
    cin>>n; 
     
     
vector <long long> y(n); 
    vector <long long> x(n); 
     
 
    for(long long i = 0; i < n; i++) cin >> x[i]; 
  sort(x.begin(),x.end()); 
 for(long long i = 0; i < n; i++) cin >> y[i]; 
 
     
    sort(y.begin(),y.end()); 
 
    vector <long long> kk; 
     
     
    for(long long i = n/2; i < n; i++) kk.push_back(y[i]); 
    y= kk; 
    kk.clear(); 
    for(long long i = n/2; i < n; i++) kk.push_back(x[i]); 
    x= kk; 
 
    n = x.size(); 
    vector <long long> city; 
    for(long long i = 0; i < n; i++){ 
        city.push_back(x[i] + y[n-1-i]); 
        num++;
    } 
    sort(city.begin(),city.end()); 
    cout << city[0] << endl; 
    } 
    return 0; 
}
