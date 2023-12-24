class Solution {
public:
    bool checkPrime(int n){
        while(n>0){
            if(n%2==0) n=n/2;
            else if(n%3==0) n=n/3;
            else if(n%5==0) n=n/5;
            else break;
        }
        return n==1;
    }

    bool isUgly(int n) {
        if(checkPrime(n)) return true;
        else return false;
    }
};