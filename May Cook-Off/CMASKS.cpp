#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>> T;
	while(T--)
	{
	    int X,Y;
	    cin>> X >> Y;
	    if(100*X>10*Y)
	    {
	        cout << "Cloth" << endl;
	    }
	    else if(100*X==10*Y)
	    {
	        cout << "Cloth" << endl;
	    }
	    else
	    {
	        cout << "Disposable" << endl;
	    }
	}
	return 0;
}
