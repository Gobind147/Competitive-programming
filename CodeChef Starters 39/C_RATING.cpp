#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    int count = y-x;
	    if(count ==0)
	    {
	        cout << "0" << endl;
	    }
	    else if(count%8==0)
	    {
	        cout << count/8 << endl;
	    }
	    else
	    {
	        cout << count/8 + 1 << endl;
	    }
	}
	return 0;
}
