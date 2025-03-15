class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int c=0;
        for(char ch : s){
            if (ch=='(') {
                if(c>0){
                    result.push_back(ch);
                }c++;
            }else{
                    c--;
                    if (c>0){
                        result.push_back(ch);
                    }
            }
        }
        return result;
    }
};