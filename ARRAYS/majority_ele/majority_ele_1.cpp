class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        
       //** Brute Force //** Time - O(N^2)
       
       /*
       int ans=-1;
       for(int i=0 ; i<n ; i++){
           int count = 0;
           for(int j=i ; j<n ; j++){
               if(arr[i]==arr[j]){
                   count++;
               }
           }
           if(count>n/2){
               ans=arr[i];
           }
       }
       return ans;
       */
       
       
       
       //**Partially Optimized//** Time - O(N) , Space - O(N)
       
       
       // This solution is also correct but still gfg shows it a wrong solution at input 
       // (1,15). It is not specified in the question that we have to print greater element 
       // in case of same majority
       
       /*
       unordered_map<int,int> mp;
       for(int i=0 ; i<n ; i++){
           mp[arr[i]]++;
       }
       
       for(auto i:mp){
           if(i.second>n/2){
               return i.second;
           }
       }
       
       return -1;
       */
       
       
       
       
       //** Optimized //** Time - O(N) , Space - O(1)
       
       
      int count=0; int ans=-1;
      for(int i=0 ; i<n ; i++){
          if(count==0){
              ans = arr[i];
              count++;
          }else if(arr[i]==ans){
              count++;
          }else{
              count--;
          }
           
      }
      int cnt=0;
      for(int i=0;i<n;i++){
          if(arr[i]==ans){
              cnt++;
          }
      }
      if(cnt<=n/2){
          ans=-1;
      }
      return ans;
       
       
    }
};
