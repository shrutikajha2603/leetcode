class Solution {
public:
    int arrangeCoins(int n) {
        int i=1, k=0, c=0;
        while(true){
            n=n-i;
            if(n<0) break;
            else c++;
            i++;
        }
        return c;
    }
};