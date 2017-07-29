39. Combination Sum
class Solution {
    //backtracking,the begin and sort operation guarantee no duplicate combinations 
public:
    void core(vector<int>& candidates,vector<vector<int>>&res,vector<int> path,int target,int begin){
        if(target==0) {          
            res.push_back(path);
            return;
        }
        for(int i=begin;i<candidates.size();i++){
            int diff=target-candidates[i];
            if(diff>=0) {
                path.push_back(candidates[i]);
                core(candidates,res,path,diff,i);
                path.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;
        sort(candidates.begin(),candidates.end());
        core(candidates,res,path,target,0);
        vector<vector<int>> ress;
        return res;
    }
};