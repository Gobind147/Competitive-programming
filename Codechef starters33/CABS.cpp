//The Cheaper Cab problem code: 

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
	    cin>> X >> Y;
	    if(X>Y)
	    {
	        cout << "SECOND"<< endl;
	    }
	    else if(Y>X)
	    {
	        cout << "FIRST"<< endl;
	    }
	    else
	    {
	        cout<< "ANY"<< endl;
	    }
	   
	}
	return 0;
}
