#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    long long n;
	    cin >> n ;
	    long long a[n];
	    for(int i=0; i<n;i++)
	    {
	        cin >> a[i];
	    }
	    long long b[n];
	    for(int j=0; j<n;j++)
	    {
	        cin >> b[j];
	    }
	    map<pair<int,int>,int> gp;
	    long long count = 0;
	    for(int k=0; k<n;k++)
	    {
	        count = count + gp[{a[k],b[k]}];
	        gp[{b[k],a[k]}]++;
	    }
	    cout << count << endl;
	}
	return 0;
}
