#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T-->0)
	{
	    int N;
	    int K;
	    cin>> N >>K;
	    int P = (4 + N)%4;
	    if(K==1 )
	    {
	        if( P==0)
	        cout<< "On" << endl;
	        else 
	        cout<< "Ambiguous" << endl;
	    }
	    else if(K==0 && P>0 && P<4)
	    {
	        cout<< "On" << endl;
	    }
	    else if(K==0 && P==0)
	    {
	        cout<< "Off" << endl;
	    }
	    else 
	    {
	        cout<< "On" << endl;
	    }
	}
	return 0;
}
