#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int n, m; 
	    cin >> n >> m;
	    int arr[n];
	    long long l = n * (m / n);
	    long long sub = l - n;
	    long long count=0;
	    long long num=0;
	    pair <int, int> p = {l, n};
	    for(int j = n + 1; j < n + m - l + 1; j++){
	        int h = (j * (m / j));
	        int d = h - j;
	        if (d >= sub){
	           sub = d;
	            p = {j, h};
	            count++;
	            }
	            }
	            cout << p.first << " " << p.second << "\n";
	            }
	            
	return 0;
}
