class Solution {
public:
    
    void rev(vector<char>& s, int i,int n){
        if(i>n){
            return;
        }
        swap(s[i],s[n]);
        return rev(s,i+1,n-1);
    }
    
    void reverseString(vector<char>& s) {
        int i=0;
        int n=s.size()-1;
        rev(s,i,n);
    }
};