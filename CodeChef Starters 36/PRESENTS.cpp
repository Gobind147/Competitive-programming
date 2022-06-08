#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>> T;
	while(T-->0)
	{
	    int N;
	    cin>> N;
	    int k = N/5;
	    if(N<=4)
	    {
	        cout << N << endl;
	    }
	    else 
	    {
	        cout << N-k << endl;
	    }
	}
	return 0;
}
