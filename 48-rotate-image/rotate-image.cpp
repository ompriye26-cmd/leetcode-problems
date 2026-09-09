class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n/2;j++){
        swap(arr[i][j],arr[i][n-1-j]);
            }
        }
    }
};