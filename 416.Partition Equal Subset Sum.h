416. Partition Equal Subset Sum
class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int sum=accumulate(nums.begin(),nums.end(),0);
       if(sum&1) return false;
        //dp
        int target=sum>>1;
        vector<int> dp(target+1);
        dp[0]=1;
        for(auto num:nums){
            for(int i=target;i>=num;i--)
                dp[i]+=dp[i-num];
        }
        return dp.back();
    }
};