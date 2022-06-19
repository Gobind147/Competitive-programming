#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
      int a,b,n;
      cin>>a>>b>>n;
      int x = a^b;
      long long count;
      long long count1;
      string s;
      
      
      
      if(a==b){
          cout<<0<<endl;
      }
      else if(x<n){
          cout<<1<<endl;
      }
      else {
          int count2 = log2(x)+1;
          int count3 = log2(n)+1;
          int count4=0;
          if(count2==count3){
              if(floor(log2(n)) == ceil(log2(n))){
                  cout<<-1<<endl;
              }
              else{
                  cout<<2<<endl;
              }
          }
          else{
              cout<<-1<<endl;
          }
          
      }
  }
  return 0;
  
}
