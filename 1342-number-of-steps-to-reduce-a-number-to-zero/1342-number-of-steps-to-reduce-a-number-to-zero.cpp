class Solution {
public:
    int count=0;
    int numberOfSteps(int num) {
        if(num==0){
            return 0;
        }
        if(num%2==0){
            num=num/2;
        }else{
            num=num-1;
        }
      
        
        return 1+numberOfSteps(num);
    }
};