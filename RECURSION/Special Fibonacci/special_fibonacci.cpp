#include <iostream>
using namespace std;


int solve(int a,int b, int n){
    
    //** Recursion //**  Time - O(2^N)
    /*
    if(n==0){
        return a;
    }
    if(n==1){
        return b;
    }
    
    return solve(a,b,n-1)^solve(a,b,n-2);
    */
    
    
    //** Optimized //** Time - O(1) , Space - O(1)
    // open f(3),f(4),f(5),f(6),f(7) you will get that due to xor property values will be in the form
    // a^b,a,b,a^b,a.....
    // ** remember sequence is starting from 0
    if((n%3)==0){
        return a;
    }else if((n%3)==1){
        return b;
    }else{
        return a^b;
    }
    
    
    
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;int b;int n;
	    cin>>a>>b>>n;
	    cout<<solve(a,b,n)<<"\n";
	}
	return 0;
}
