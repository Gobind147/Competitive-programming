#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T-->0)
	{
	    int X;
	    int Y;
	    
	    cin>> X >>Y;
	    if(3*X>2*Y)
	    {
	        cout<< 2*Y << endl;
	    }
	    else
	    {
	        cout<< 3*X << endl;
	    }
	}
	return 0;
}
