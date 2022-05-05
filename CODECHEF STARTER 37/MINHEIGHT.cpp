#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int x;
	    int h;
	    cin >> x >> h;
	    if(x>=h)
	    {
	        cout << "YES" <<endl;
	    }
	    else
	    {
	        cout << "NO" <<endl;
	    }
	}
	return 0;
}
