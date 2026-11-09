class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j]==nums[i]){
                j++;
            }
            else{
                ans.push_back(nums[i]);
                i=j;
            }
        }
        ans.push_back(nums[i]);
        nums=ans;
        return nums.size();
    }
};