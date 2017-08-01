494.Target Sum
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if((S+sum)&1) return 0;
        int target=(S+sum)/2;
        if(target>sum) return 0;
        vector<int> res(target+1);
        res[0]=1;
        for(auto num:nums){
            for(int i=target;i>=num;i--){
                res[i]+=res[i-num];
            }
        }
        return res.back();
    }
};