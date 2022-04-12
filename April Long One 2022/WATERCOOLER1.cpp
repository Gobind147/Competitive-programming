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
	    int M;
	    cin>> X >>Y>> M;
	    if(M*X >= Y)
	    {
	        std::cout << "NO" << std::endl;
	    }
	    else
	    {
	        cout <<"YES"<< endl;
	    }
	}
	return 0;
}
