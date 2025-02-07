class Solution {
public:
    int m = 1e9+7;
    long long power(long long b, long long e){
        if(e==0) return 1;
        long long ans = power(b, e/2);
        ans*=ans;
        ans%=m;

        if(e%2==1){
            ans*=b;
            ans%=m;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odds=n/2;
        long long evens=n/2+n%2;
        return (power(5,evens) * power(4,odds))%m;
    }
};