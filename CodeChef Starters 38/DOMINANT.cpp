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
	    if(x+y< n || y+n<x || n+x< y)
	    {
	        cout << "Yes" << endl;
	    }
	    else
	    {
	        cout<< "no" << endl;
	    }
	}
	return 0;
}
