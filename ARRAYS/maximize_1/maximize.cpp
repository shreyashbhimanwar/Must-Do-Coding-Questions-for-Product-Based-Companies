// https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1#

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    
    /*
    int count_arr(int arr[],int n){
        int ele=0;int i=n;
        int ans=INT_MIN;
        while(i--){
            if(arr[i]==0){
                ele=0;
            }
            if(arr[i]==1){
                ele++;
                ans=max(ans,ele);
            }
        }
        return ans;
    }
    */ 
    
    int findZeroes(int arr[], int n, int m) {
        // Brute Force
        /*
        int res=0;int ttl=0;
        for(int i=0 ; i<n ; i++){
            if(arr[i]==0){
                ttl++;
            }
        }
        if(m>ttl){
            return n;
        }
        
        for(int i=0 ; i<n ; i++){
            int cnt = m;
            queue<int> q;
            for(int j=i ; j<n ; j++){
                
                if(arr[j]==0){
                    cnt--;
                    arr[j]=1;
                    q.push(j);
                }
                if(cnt==0){
                   int ans = count_arr(arr,n);
                   res = max(res,ans); 
                }
                
            }
            while(!q.empty()){
                arr[q.front()]=0;
                q.pop();
            }
        }
        return res;
        */
        
        int i=-1;int cnt=0;int res=INT_MIN;
        for(int j=0 ; j<n ; j++){
            if(arr[j]==0){
                cnt++;
            }
            
            while(cnt>m){
                i++;
                if(arr[i]==0){
                    cnt--;
                }
            }
            int ans = j-i;
            res = max(ans,res);
            
        }
        
        return res;
        
        
    }  
};