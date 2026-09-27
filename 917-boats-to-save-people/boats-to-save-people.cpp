class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end(), greater<int>());
        int n=arr.size()-1;
        int count=0;
        for(int i=0;i<=n;){
            if(arr[i]==limit){
                count++;
                i++;
            }
            else if(arr[i]<limit){
                if(arr[i]+arr[n]<=limit){
                    count++;
                    n--;
                    i++;
                }
                else if(arr[i]+arr[n]>limit){
                    count++;
                    i++;
                }
            }
        }
        return count;
    }
};