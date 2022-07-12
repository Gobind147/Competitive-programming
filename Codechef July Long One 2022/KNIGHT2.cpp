#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
  // your code goes here
  long long t;
  cin>>t;
  while(t--){
      long long a,b,c,d;
      cin>>a>>b>>c>>d;
      long long count=abs(a+b-c-d);
      long long num=0;
      long long k=0;
      if(count%2==0){
          cout<<"YES\n";
      }
      else{
          cout<<"NO\n";
      }
  }
  return 0;
}
