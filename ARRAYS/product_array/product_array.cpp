/*
PROBLEM LINK
https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1#
*/




class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      
       // Brute Force  Time - O(N^2) Space - O(N) //
       
       /*
       for(int i=0 ; i<n ; i++){
           long long int prdt = 1;
           for(int j=0 ; j<n ; j++){
               if(j==i){
                   continue;
               }else{
                   prdt = prdt*nums[j];
               }
           }
           ans.push_back(prdt);
       }
       
       return ans;
       */
       
       //** Time - O(N) , Space - O(N)
       
       /*
       vector<long long int> postfix(n);
       vector<long long int> prefix(n);
       long long int prdt=1;
       prefix[0]=1;
       for(int i=1 ; i<n ; i++){
        
           prdt = prdt*nums[i-1];
           prefix[i] = prdt;
       }
       
       prdt = 1;
       postfix[n-1] = 1;
       for(int i=n-2 ; i>=0 ; i--){
       
           prdt = prdt*nums[i+1];
           postfix[i] = prdt;
       }
       
       for(int i=0 ; i<n ; i++){
           nums[i] = prefix[i]*postfix[i];
       }
       
       return nums;
       */
       
       
       
       // Time - O(N) , Space - o(1)
       // NOTE: IF OUTPUT ARRAY IS NOT COUNT AS EXTRA MEMORY
       
        vector<long long int> ans(n);
        long long int prdt=1;
        ans[0]=1;
        for(int i=1 ; i<n ; i++){
            prdt = prdt*nums[i-1];
            ans[i] = prdt;
        }
        
        prdt=1;
        for(int i=n-2 ; i>=0 ; i--){
            prdt = prdt*nums[i+1];
            ans[i] = ans[i]*prdt;
        }
        
        return ans;
        
       
       
        
    }
    
    
};
