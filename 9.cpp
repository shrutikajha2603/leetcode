class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        if (x<0){
            return false;
        }
        else{
            unsigned int rev = 0;
            while(x>0){
                int rem = x % 10;
                rev = rev * 10 + rem;
                x = x/10;
            }

            if(rev==original){
                return true;
            }

            else{
                return false;
            }
        }
    }
};