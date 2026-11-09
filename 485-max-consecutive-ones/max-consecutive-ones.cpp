class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int max=0;
        while(j<n){
            if(nums[j]==1){
                j++;
            }
            else{ 
                if((j-i)>max)
                max=j-i;
                j++;
                i=j;
            }
        }
        if(j-i>max) max=j-i;
        return max;
    }
};