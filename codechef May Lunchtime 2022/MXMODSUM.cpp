#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    long long n,m;
	    cin >> n >> m;
	    long long arr[n];
	    for(long long i = 0; i<n ; i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    long long max1 = arr[n-1];
	    long long max2 = 0;
	    for(long long j = n-2; j>0 ; j--)
	    {
	        if(arr[j]<max1)
	        {
	            max2 = arr[j];
	            break;
	        }
	    }
	     
	    long long k = 2*max1;
	    long long i = (max2-max1)%m;
	    long long l = max1 + max2 + m +i;
	    cout << max(l,k) << endl;
	}
	return 0;
}
