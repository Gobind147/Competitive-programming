//Monthly Budget problem code: BUDGET

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
	    if(X-30*Y >=0)
	    {
	        cout<< "YES"<< endl;
	    }
	    else
	    {
	        cout << "NO"<< endl;
	    }
	    
	}
	return 0;
}
