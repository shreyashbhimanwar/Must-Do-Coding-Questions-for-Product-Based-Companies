class Solution {
  public:
    vector<int> increment(vector<int> digits ,int N) {

        //** Brute Force //** Time - O(N) , Space - O(N)
        
        /*
        int num = 1;int sum=0;
        for(int i=N-1 ; i>=0 ; i--){
            sum = sum + digits[i]*num;
            num = num*10;
        }
        sum = sum + 1;
        vector<int> x;
        while(sum>0){
            x.push_back(sum%10);
            sum=sum/10;
        }
        reverse(x.begin(),x.end());
        
        return x;
        */
        
        
        
        
        //**Optimized//**  Time - O(N) , Space - O(1)
        
        for(int i=N-1 ; i>=0 ; i--){
            if(digits[i]<9){
                digits[i] = digits[i] + 1;
                return digits;
            }else{
                digits[i] = 0;
            }
        }
        
        digits.insert(digits.begin(),1);
        return digits;
        
        
        
        
        
        
        
        
    }
};