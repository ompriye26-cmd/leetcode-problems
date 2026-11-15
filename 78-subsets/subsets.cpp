class Solution {
public:
   void sub(vector<int> arr,int idx,vector<int> ans,vector<vector<int>> &finalans){
            if(idx==arr.size()){
                finalans.push_back(ans);
                return;
            }
            sub(arr,idx+1,ans,finalans);
            ans.push_back(arr[idx]);
            sub(arr,idx+1,ans,finalans);
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> finalans;
        int idx=0;
        vector<int> ans;
        sub(nums,idx,ans,finalans);
        return finalans;
    }
};