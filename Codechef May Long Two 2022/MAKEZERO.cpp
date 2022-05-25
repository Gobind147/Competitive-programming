#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int  arr[32]={};
	    for(int i=0;i<n;i++)
	    {
	        int p;
	        cin >> p;
	        int j =0;
	        int k = 0;
	        while(p)
	        {
	            if(arr[k]==0)
	            {
	                arr[k]= p%2;
	                
	            }
	            p/= 2;
	            j++;   
	           k++;
	        }
	       
	        
	    }
	    int arr1[32]={};
	    for(int i=0;i<32;i++)
	    {
	        arr1[i]=arr[i];
	    }
	    int count =0;
	    for(int h=0;h<32;h++)
	    {
	        count = count + arr1[h];
	    }
	    cout << count << endl;
	}
	return 0;
}
