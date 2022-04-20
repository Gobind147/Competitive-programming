#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T-->0)
	{
	    int N;
	    int X;
	    cin>> N >>X;
	    if(X<N)
	    {
	        cout<< "NO" << endl;
	    }
	    else if(X%N==0)
	    {
	        cout<< "YES" << endl;
	    }
	    else
	    {
	        cout<< "NO" << endl;
	    }
	    
	}
	return 0;
}
