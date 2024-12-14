class Solution {
public:
    bool rotateString(string s, string goal) {
        int l = s.length();
        int m = goal.length();

        if(l!=m){
            return false;
        }

        if((s+s).find(goal) != string::npos){
            return true;
        }   
        return false;
    }
};