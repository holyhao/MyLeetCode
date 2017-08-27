300. Longest Increasing Subsequence
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //dp[i] represents the lenth of the list end with i
        //dp[i]=max(dp[i],dp[j]+1) for all nums[j]<=nums[i]
        if(nums.size()==0) return 0;
        int res=1;
        vector<int> dp(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                dp[i]=max(dp[i],dp[j]+1);
            }
            res=max(res,dp[i]);
        }
        return res;
    }
};