//User function template for C++

/*
NOTE: GFG contraint satisfied but google inteview question to work it out in O(1) Space
*/

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
	    
	    /*    :(   */
	    
	    
	}
};