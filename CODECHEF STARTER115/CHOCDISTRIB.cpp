#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int T;
     cin>>T;
     while(T>0)
     {
         int N;
         cin>>N;
         if(N%2==0)
         cout<<N/2<<" " <<N<<endl;
         else
         cout<<N/2+1<<" " <<N<<endl;
         T--;
     }
}
