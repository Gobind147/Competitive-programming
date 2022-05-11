#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    long long x,y,n;
	    cin >> n >> x >> y;
	    long long k= abs(n-x);
	    long long j = abs(y-k);
	    long long m = min(k,j);
	    cout << m << endl;
	}
	return 0;
}
