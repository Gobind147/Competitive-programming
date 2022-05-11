#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    long long n,y,x;
	    cin >> n >> x >> y;
	    if(y >= n*x)
	    {
	        cout << "yes" << endl;
	    }
	    else
	    {
	        cout << "no" << endl;
	    }
	}
	return 0;
}
