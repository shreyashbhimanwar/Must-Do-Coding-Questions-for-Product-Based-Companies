class Solution{
	public:
    	long long findNth(long long N)
    {
        
        //**Brute Force**//
        
        /*
        if(N==1){
            return 1;
        }
         
        int count = 0;
        int num = 2;
        
        
        while(count!=N){
            int temp = num;
            while(temp>1){
                if(temp%9==0){
                    continue;
                }else{
                    count++;       
                }
                temp = temp/10;
            }
            num++;
        }
        return num;
        */
        
        //** Optimized **// Time - O(N) , Space - O(1)
        
        long long num = N;
        string s = "";
        while(num){
            s = to_string(num%9) + s;
            num = num/9;
        }
        
        return stoll(s);
        
    }
};