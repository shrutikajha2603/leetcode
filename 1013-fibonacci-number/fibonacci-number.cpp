class Solution {
public:
    int fib(int n) {
        int fn;
        if (n==0){
            fn=0 ;
        }
        else if(n==1){
            fn=1;
        }
        else if(n>1){
            fn=(fib(n-1)+fib(n-2));
        }
        return fn;
    }
};