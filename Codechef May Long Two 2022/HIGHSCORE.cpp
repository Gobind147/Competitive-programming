#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int n1,n2,n3,n4;
	    cin >> n1 >> n2 >> n3 >> n4;
	    
	    int count =  max(n1, max(n2, max(n3, n4)));
	    cout << count << endl;
	}
	return 0;
}
