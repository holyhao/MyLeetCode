240. Search a 2D Matrix II
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        int j=matrix[0].size()-1;
        int i=0;
        while(i<matrix.size()&&j>=0){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};