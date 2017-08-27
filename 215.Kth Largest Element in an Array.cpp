215.Kth Largest Element in an Array
class Solution {
public:
    int partition(vector<int>&nums,int l,int r){
        int m=l;
        int ran=nums[r];
        for(int i=l;i<r;i++){
            if(nums[i]>=ran) swap(nums[i],nums[m++]);
        }
            swap(nums[m],nums[r]);
            return m; 
    }
    int findKthLargest(vector<int>& nums, int k) {
        int l=0;
        int r=nums.size()-1;
        int m=partition(nums,l,r);
        while(m!=k-1){
            if(m>k-1) {
                m=partition(nums,l,m-1);
            }else{
                m=partition(nums,m+1,r);
            }
        }
        return nums[m];
    }
};