class Solution {
public:
   double power(double a,long long b){
     if(b==0) return 1;
    double p=power(a,b/2);
    return (b%2==0) ? p*p:a*p*p;
   }
    double myPow(double x, int n) {
        bool flag=(n<0);
        long long b=n;
        double ans=power(x,abs(b));
        if(flag==true) return 1/ans;
        else return ans;
    }
};