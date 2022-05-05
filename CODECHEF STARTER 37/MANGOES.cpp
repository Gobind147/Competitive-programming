#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int x,y,z;
	    cin >> x >> y >> z;
	    int count = z-y;
	    int k = count/x;
	    cout << k << endl;
	}
	return 0;
}
