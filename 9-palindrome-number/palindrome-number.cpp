class Solution {
public:
    bool isPalindrome(int x) {
        int ori=x;
        if(x<0) return false;
        else{
            unsigned int rev=0;
            while(x>0){
                int rem = x%10;
                rev = rev*10 + rem;
                x/=10;
            }
            if(ori==rev) return true;
            else return false;
        }
    }
};