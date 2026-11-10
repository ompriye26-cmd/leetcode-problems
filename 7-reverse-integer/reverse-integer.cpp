class Solution {
public:
    int reverse(int x) {
        double y=0;
        double a=10;
        if(x==0) return 0;
        while(x!=0){
            int rem=x%10;
            y=(y*a)+rem;
           // a*=10;
            x/=10;
        }
        if(y>INT_MAX || y<INT_MIN) return 0;
        return y;
    }
};