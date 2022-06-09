#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x,y,a;
	    cin >> x >> y >> a;
	    if(x<=a && y>a)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" <<endl;
	    }
	}
	return 0;
}
