class Solution {
public:
    int pivotInteger(int n) {
        int l = 1, r =  n;
        int ts = (n * (n + 1))/2;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int fhs = (mid * (mid + 1))/2;
            int shs = ts - fhs + mid;
            if(fhs == shs)return mid;
            else if(fhs < shs){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return -1;
    }
};