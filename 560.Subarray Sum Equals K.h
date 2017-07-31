560.Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0,sum=0;
        map<int,int> record;
        record[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res+=record[sum-k];
            record[sum]++;
        }
        return res;
    }
};