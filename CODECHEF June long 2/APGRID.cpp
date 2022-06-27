#include<bits/stdc++.h>
using namespace std;

int main() 
{
 long long t;
 cin>>t;
	
 while(t--)
 {
  long long n,m;
  long long count =0;
  cin>>n>>m;

  if(n<m)
  {
      long long f=0;
      for(int i=0;i<m;i++)
      {
          cout<<i+1<<" ";
          f++;
      }
      cout << endl;
      long long num = n+2;
          for(int i=1;i<n;i++)
          {
              long long s = num;
              cout<<s<<" ";
              for(int j=1;j<m;j++)
              {
                  s+=i+1;
                  cout<<s<<" ";
              }
                count++;
              num+=n+1;
              cout<<endl;
          }
  }
  else
  {
      long long count1=0;
      long long s;
      long long num=m+1;
      for(int i=0;i<n;i++)
      {
          s =i+1;
          cout<<s<<" ";
          for(int j=1;j<m;j++)
          {
              s+=num;
              cout<<s<<" ";
              count1++;
          }
          cout<<endl;
          num++;
      }
  }
}
 return 0;
}
