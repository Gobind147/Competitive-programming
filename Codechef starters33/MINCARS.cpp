//Minimum Cars required problem code: MINCARS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T-->0)
	{
	    int X;
	    cin>> X;
	    int count =0;
	    if(X%4==0)
	    {
	        count = X/4;
	    }
	    else
	    {
	        count = X/4 +1;
	    }
	    cout << count << endl;
	}
	return 0;
}
