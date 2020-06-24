class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long num=x;    
        long sum =0;
        while(x){
        int rem=x%10;
        x=x/10;
        sum = sum*10+rem;
        if(sum > INT_MAX || sum < INT_MIN) return 0;
            }
        
        return sum==num;
    }
};