#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

int main() 
{ 
    
 
    ll t; 
    cin >> t; 
    
    while (t--) 
    { 
 
          ll x,y; 
          cin >> x >> y; 
          vector<int> num; 
          num.push_back(2); 
          ll count=0;
          int arr[x];
          ll count1=0;
          if(x%2 && y%2) 
          {  
            ll t1=x^2; 
            num.push_back(t1); 
            ll t2=y^2; 
            num.push_back(t2); 
            count++;
          } 
          else 
          { 
            if(x%2) 
            { 
                ll t1=x^2; 
                ll t2=y^t1; 
                num.push_back(t1); 
                num.push_back(t2); 
                count1++;
            } 
            else 
            { ll t1=y^2; 
                ll t2=x^t1; 
                num.push_back(t1); 
                num.push_back(t2); 
 
            } 
          } 
 
          sort(num.begin(),num.end()); 
 
          for(auto i:num) 
            cout<<i<<" "; 
 
        cout<<endl; 
 
    } 
 
 
}
