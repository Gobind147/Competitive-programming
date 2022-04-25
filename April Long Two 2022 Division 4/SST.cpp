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
	    if(10*X>5*Y)
	    {
	        cout << "FIRST" << endl;
	    }
	    else if(5*Y>10*X)
	    {
	        cout << "SECOND" <<endl;
	    }
	    else
	    {
	        cout << "ANY" << endl;
	    }
	}
	return 0;
}
	    
