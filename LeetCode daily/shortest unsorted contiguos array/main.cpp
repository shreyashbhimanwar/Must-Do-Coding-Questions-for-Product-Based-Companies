/*
https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
*/


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //** Brute Force **//  Time - O(NlogN) , Space - O(N)
        
        /*
        vector<int> res = nums;
        sort(res.begin(),res.end());
        int l=0;int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=res[i]){
                l=i;
                break;
            }
        }
        for(int j=nums.size()-1 ; j>=0 ;j--){
            if(nums[j]!=res[j]){
                m=j;
                break;
            }
        }
        if(m<l || (l==0 && m==0)){
            return 0;
        }else{
            return m-l+1;
        }
        */
        
        //** Optimized **//
        
        int max_num=INT_MIN;
        int end=-1;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]<max_num){
                end=i;
            }else if(nums[i]>max_num){
                max_num=nums[i];
            }
        }
        int start = 0;
        int min_num = INT_MAX;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            if(nums[i]>min_num){
                start=i;
            }else if(nums[i]<min_num){
                min_num=nums[i];
            }
        }
        
        return end-start+1;
        
    }
};