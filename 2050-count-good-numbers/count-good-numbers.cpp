class Solution {
public:
long long power(int a,long long b,int mod){
    if(b==0) return 1;
    long long half=power(a,b/2,mod);
    if(b%2==1) return (half*half*a)%mod;
    else return (half*half)%mod;
}
    int countGoodNumbers(long long n) {
        long long mod=1e9+7;
        long long oddplace=n/2;
        long long evenplace=n-n/2;
        return (power(5,evenplace,mod)*power(4,oddplace,mod))%mod;
    }
};