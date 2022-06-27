#include<bits/stdc++.h>
using namespace std;

long long GCDR(long long l, long long r, long long p[],long long s[], long long n)
{
    long long count4 = 0;
    if (r==n-1)
        return p[l-1];
    if (l==0)
        return s[r+1];
    return __gcd(p[l-1], s[r+1]);
}
void FPS(long long p[], long long arr[], long long s[], long long n)
{
    long long count1=0;
    p[0] = arr[0];

    for (int i=1 ;i<n; i++)
    {
        p[i] = __gcd(p[i-1], arr[i]);
        count1++;
    }

    s[n-1] = arr[n-1];
 
    for (int i=n-2; i>=0 ;i--)
        s[i] = __gcd(s[i+1], arr[i]);
}
int main() {
 
 long long t;
 cin >> t;
 while(t--){
    
long long n;
cin >> n;
long long p[n] ;
long long s[n];
long long arr[n];
long long arr1[n];

    for(int i=0 ; i<n ; i++)
    cin >> arr[i];
long long a =0;
FPS(p , arr , s , n);
long long count = 0 ;
for(int i = 0 ; i<n ; i++)
{
    if( 1 < GCDR( i , i , p , s , n))
    { 
        count++;
        
        
    }
    else
    {
        a++;
    }
    
}

cout << count << endl;
     
 }
return 0;
    
}
