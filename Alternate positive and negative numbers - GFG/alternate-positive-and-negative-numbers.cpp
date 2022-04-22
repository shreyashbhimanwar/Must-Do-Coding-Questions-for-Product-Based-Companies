// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:


    
	void rearrange(int arr[], int n) {
	    
	    
	    //** Brute Force //** Time - O(N) , Space - O(N)
	    
	   
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0 ; i<n ; i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }else{
	            neg.push_back(arr[i]);
	        }
	    }
	    
	    int i=0;int p=0;int ne=0;
	    while(i<n){
	        if(p<pos.size()){
	            arr[i]=pos[p];
	            p++;
	            i++;
	        }
	        if(ne<neg.size()){
	            arr[i]=neg[ne];
	            ne++;
	            i++;
	        }
	    }
	   
	    
	    
	    //** Optimized //** Time - O(N) , Space - O(1)
	   // int k=0;int i=k;int j=k;
	   // while(k<n){
	   //     if(k%2==0){
	   //         if(arr[k]<0){
	   //             i=k;
	           
	   //             while(i<n-1 && arr[i]<0){
	   //                 i++;
	   //             }
	                
	   
	                
	   //             while(i!=k){
	   //                 swap(arr[i-1],arr[i]);
	   //                 i--;
	   //             }
	                
	   //         }   
	   //         k++;
	   //     }else{
	   //         if(arr[k]>=0){
	                
	   //             j=k;
	                
	   //             while(j<n-1 && arr[j]>=0){
	   //                 j++;
	   //             }
	                
	   //             if(j==n-1){
	   //                 j=k;
	   //             }
	                
	   //             while(j!=k){
	   //                 swap(arr[j-1],arr[j]);
	   //                 j--;
	   //             }
	   //         }
	   //         k++;
	   //     }
	   // }
	    
	    
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends