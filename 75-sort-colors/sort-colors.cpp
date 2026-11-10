class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int k=n-1;
        while(j<n){
            if(nums[j]==0){
               swap(nums[i],nums[j]);
               i++;
               j++;
            }
            else j++;
        }
        while(i<=k){
            if(nums[i]==2 && nums[k]==1){
                swap(nums[i],nums[k]);
                i++;
                k--;
            }
            else if(nums[i]==1){
                i++;
            }
            else if(nums[k]==2){
                k--;
            }
            
        }

    }
};