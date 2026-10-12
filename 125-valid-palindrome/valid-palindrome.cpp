class Solution {
public:
bool notvalid(char a){
    if(a>=48 and a<=57) return false;
    if(a<97 or a>122)
    return true;
    else return false;
}
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]>=65 && s[i]<=90) s[i]+=32;
            if(s[j]>=65 && s[j]<=90) s[j]+=32;
            if(notvalid(s[i])) {i++; continue;}
            if(notvalid(s[j])) {j--; continue;}
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else if(s[i]!=s[j]) return false;
        }
        return true;
    }
};