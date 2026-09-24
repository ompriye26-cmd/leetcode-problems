class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         vector<int> ans;
       int j=numbers.size()-1;
       int i=0;
       while(i<j){
        int sum=numbers[i]+numbers[j];
        if(sum==target){
           ans.push_back(i+1);
           ans.push_back(j+1);
           return ans;
        }
        if(sum<target){
            i++;
        }
        if(sum>target){
            j--;
        }
       }
       return ans;
    }
};