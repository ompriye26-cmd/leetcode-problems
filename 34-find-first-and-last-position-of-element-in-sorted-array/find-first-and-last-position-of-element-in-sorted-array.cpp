class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ub=nums.size()-1;
        int lb=0;
        int first=-1;
        int second=-1;
//first index
        while(lb<=ub){
           int mid=(lb+ub)/2;
            if(nums[mid]==target){
                first=mid;
                ub=mid-1;
            }
            else if(nums[mid]>target){
                ub=mid-1;
            }
            else if(nums[mid]<target){
                lb=mid+1;
            }
        }
//last index
            ub=nums.size()-1;
            lb=0;
        while(lb<=ub){
           int mid=(lb+ub)/2;
            if(nums[mid]==target){
                second=mid;
                lb=mid+1;
            }
            else if(nums[mid]>target){
                ub=mid-1;
            }
            else if(nums[mid]<target){
                lb=mid+1;
            }
        }
        return {first,second};
    }
};