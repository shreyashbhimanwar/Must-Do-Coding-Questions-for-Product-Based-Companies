class Solution{
public:
    
    
    //** Recursive Solution function//**
    /*
    long long fact(long long num){
        if(num==0){
            return 1;
        }
        return num*fact(num-1);
    }
    */
    
    vector<long long> factorial(vector<long long> a, int n) {
        
        //** Brute Force//**
        // Write a factorial function for one number, calculate factorial for each 
        // element in the array
        
        
        //** Dynamic Programming Solution//** ---- COMING SOON!!!
        
        
        //** Partially Optimized//** - Hash Map -- Time - O(max(A) + N) , Space - O(max(A))
        long long M = 1000000007;
        long long mx = -1;
        for(int i=0 ; i<n ; i++){
            mx = max(mx,a[i]);
        }
        long long arr[mx+1];
        arr[0]=1;
        for(int i=1 ; i<mx+1 ; i++){
            arr[i] = (i*arr[i-1])%M;
        }
        
        for(int i=0 ; i<n ; i++){
            a[i] = arr[a[i]];
        }
        
        return a;
        
        
        
        
        //** Recursive Solution//**
        /*
        for(int i=0 ; i<n ; i++){
            a[i] = fact(a[i])%1000000007;
            
        }
        return a;
        */
        
    }
};