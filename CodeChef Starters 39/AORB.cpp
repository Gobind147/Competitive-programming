#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    int count1 = 500 - 2*x + 1000 - 4*(x+y);
	    int count2 = 1000 - 4*y + 500 - 2*(x+y);
	    if(count1>=count2)
	    {
	        cout << count1 << endl;
	    }
	    else
	    {
	        cout << count2 << endl;
	    }
	}
	return 0;
}
