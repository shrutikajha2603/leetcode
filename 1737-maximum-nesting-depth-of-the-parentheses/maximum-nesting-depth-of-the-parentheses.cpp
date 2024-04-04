class Solution {
public:
    int maxDepth(string s) {
        int depth=0, max_depth=0;
        for(char c : s){
            if(c=='('){
                depth++;
                if(depth>max_depth) max_depth = depth;
            }
            if(c==')') depth--;
        }
        return max_depth;
    }
};