#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T-->0)
	{
	    int X;
	    cin>> X ;
	    if(0.1*X>100)
	    {
	        cout << 0.1*X <<endl;
	    }
	    else
	    {
	        cout << 100 << endl;
	    }
	}
	return 0;
}
