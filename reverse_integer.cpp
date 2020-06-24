class Solution {
public:
    int reverse(int x) {
    long sum =0;
        while(x){
        int rem=x%10;
        x=x/10;
        sum = sum*10+rem;
        if(sum > INT_MAX || sum < INT_MIN) return 0;
            }
        
        return sum;
    }
};