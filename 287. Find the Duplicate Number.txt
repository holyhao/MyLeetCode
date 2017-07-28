287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int low=1;
        int high=len-1;
        int mid=0;
        while(low<high){
            mid=(low+high)/2;
            int count=0;
            for(auto num:nums){
                if(num<=mid) count++;
            }
            if(count>mid){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;  
    }
};