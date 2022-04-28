class Solution {
  public:
  
  
  
  // GREEDY - O(N) , Space - O(1)
        
      
        int goal=N-1;
        for(int i=N-1;i>=0;i--){
            if(i+A[i]>=goal){
                goal=i;
            }
        }
        
        if(goal>0){
            return false;
        }else{
            return true;
        }
        
       
  

  
  //Recursive
  
  /*
    int solve(int A[],int N,int i,int ans){
        if(i==N-1){
            ans=1;
            return ans;
        }
        if(A[i]==0 || i>=N){
            return ans;
        }
        for(int j=A[i]; j>0 ; j--){
            solve(A,N,i+j,ans);
            cout<<ans<<"\n";
        }
    }
    
    int canReach(int A[], int N) {
        
        return solve(A,N,0,0);
        
    */    
        
        
        
        
        
    }
};