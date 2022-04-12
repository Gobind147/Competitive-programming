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
	    int count;
	    cin>> X >>Y;
	    if(Y%X==0)
	    {
	        count = Y/X -1;
	        std::cout << count << std::endl;
	    }
	    else
	    {
	        count = Y/X;
	        cout << count << endl;
	    }
	}
	return 0;
}
