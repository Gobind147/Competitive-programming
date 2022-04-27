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
	    int Z;
	    cin>> X>> Y>> Z;
	    if (Z%X==0 && Z%Y==0)
	    {
	        cout << "ANY" <<endl;
	    }
	    else if(Z%X==0)
	    {
	        cout << "CHICKEN" <<endl;
	    }
	    else if(Z%Y==0)
	    {
	        cout << "DUCK" << endl;
	    }
	    
	    else
	    {
	        cout << "NONE" <<endl;
	    }
	}
	return 0;
}
