#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> s[i];
	    }
	    int count1 =0;
	    int count2 = 0;
	    for(int i=0;i<n;i++)
	    {
	    if(s[i]=="START38")
	    {
	        count1 = count1 + 1;
	    }
	    else if(s[i]=="LTIME108")
	    {
	        count2 = count2 + 1;
	    }
	    }
	    cout << count1 << " " << count2 << endl;
	}
	return 0;
}
