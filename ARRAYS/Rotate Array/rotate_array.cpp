class Solution{
    public:
    
    
    void reverse(int arr[] , int i , int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        
        //** Brute Force **// Time - O(d*n)
        
        /*
        d = d%n;
        while(d--){
            int i=0; int j=1;
            for(j=1;j<n;j++){
                swap(arr[i],arr[j]);
                i++;
            }
        }
        */
        
        //** Optimized **// Time - O(N) , Space - O(1)
        d = d%n;
        reverse(arr,0,n-1);
        reverse(arr,0,n-d-1);
        reverse(arr,n-d,n-1);
    
    }
};