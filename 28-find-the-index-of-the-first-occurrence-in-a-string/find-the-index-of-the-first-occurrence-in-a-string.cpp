class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int j;
        if(haystack == needle) return 0;
        for(int i=0; i<=n-m; i++){
            for(j=0; j<m; j++){
                if(haystack[i+j]!=needle[j]) break;
            }
            if(j==m) return i;
        }
        return -1;
    }
};