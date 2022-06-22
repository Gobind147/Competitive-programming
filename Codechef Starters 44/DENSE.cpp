#include <iostream>
using namespace std;
int main() 
    {
        long long t;
  cin >> t;
  while(t--){
      long long n;
      cin >> n;
      string str;
      cin >> str;
      string s1;
      long long count =0;
      long long i =0;
      long long j = n-1;
      long long ans = 0;
      while(i <= j){
          if(str[i] == '(' and str[j] == ')'){
              i++;
              j--;
              ans++;
          }
           else if(str[i] == '(' and str[j]== '('){
              count++;
              ans++;
              j--;
          }
           else if(str[i]== ')' and str[j]== ')'){
              count++;
              i++;
          }
          else{
              count += 2;
              i++;
              j--;
          }
      }
      cout << count <<endl;
      }
      return 0;
        
    }
