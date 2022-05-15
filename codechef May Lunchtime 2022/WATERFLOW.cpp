#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int w,x,y,z;
	    cin >> w >> x >> y >> z;
	    if(x> w + y*z)
	    {
	        cout << "unfilled" << endl;
	    }
	    else if(x < w + y*z)
	    {
	        cout << "overflow" << endl;
	    }
	    else if(x = w + y*z)
	    {
	        cout << "filled" << endl;
	    }
	    
	}
	return 0;
}
