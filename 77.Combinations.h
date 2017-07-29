77.Combinations
class Solution {
public:
    void core(int &n,int k,int begin,vector<vector<int>>&res,vector<int> path){
        if(k==0){
            res.push_back(path);
            return;
        }
        for(int i=begin;i<=n;i++){
             path.push_back(i);
             k--;
             core(n,k,i+1,res,path);
             k++;
             path.pop_back();     
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int>path;
        //vector<bool> visit(n,false);
        core(n,k,1,res,path);
        return res;
    }
};