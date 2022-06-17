// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    int i = 0;
	    while(i<n-1){
	        if((arr[i]<arr[i+1])){
	            if((i%2==0))
	                i++;
	            else
	                swap(arr[i],arr[i+1]);
	        
	    }
	    if((arr[i]>arr[i+1])){
	        if(i%2==1)
	            i++;
	        else
	            swap(arr[i],arr[i+1]);
	    }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends