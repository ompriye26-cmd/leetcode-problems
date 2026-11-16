class Solution {
public:
void para(string s,int n,int open,int close,vector<string> &arr){
    if(close==n){
        arr.push_back(s);
        return;
    }
    if(open<n) para(s+"(",n,open+1,close,arr);
    if(close<open) para(s+")",n,open,close+1,arr);

}
    vector<string> generateParenthesis(int n) {
        vector<string> arr;
        para("",n,0,0,arr);
        return arr;
    }
};