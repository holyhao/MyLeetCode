78.Subsets
class Solution {
public:
    void core(vector<int>& nums,vector<vector<int>>&res,vector<int> path,int begin){
        res.push_back(path);
        if(begin==nums.size()){
            return;
        }
        for(int i=begin;i<nums.size();i++){
            path.push_back(nums[i]);
            core(nums,res,path,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        core(nums,res,path,0);
        return res;   
    }
};