    class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
std::unordered_map<int,int> a;
int x=0;

    for(int i=0;i<nums.size();i++){
        x=target-nums[i];
        if(a.find(x)!=a.end()){
            return {a.find(x)->second,i};
        }else{
            a[nums[i]]=i;
        }
    }
return{};
}
};