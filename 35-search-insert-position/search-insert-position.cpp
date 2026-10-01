class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ub=nums.size()-1;
        int lb=0;
        if(target>nums[ub]) return ub+1;
        if(target<nums[lb]) return lb;
        while(lb<=ub){
            int mid=(lb+ub)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                lb=mid+1;
                //return ub;
            }
            else if(nums[mid]>target){
                ub=mid-1;
                //return lb;
            }
        }
        return lb;
    }
};