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
	    int k = min(x-1, min(n-x, min(y-1, n-y)));
	    int count = 3*n+ 2*k - 3;
	    cout << count << endl;
	}
	return 0;
}

