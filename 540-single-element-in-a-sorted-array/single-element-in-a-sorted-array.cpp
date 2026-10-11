class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int lo=0;
        int hi=arr.size()-1;
    int f;
    int s;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(mid==0||mid==arr.size()-1) return arr[mid];
    else{
    if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
        return arr[mid];
    }
    else if(arr[mid]==arr[mid+1]){
        f=mid;
        s=mid+1;
        if((f-lo)%2==0){
            lo=s+1;
        }
        else{
            hi=f-1;
        }
    }
    else if(arr[mid]==arr[mid-1]){
        f=mid-1;
        s=mid;
        if((f-lo)%2==0){
            lo=s+1;
        }
        else{
            hi=f-1;
        }
    }
   }
 }
 return 0;
    }
};