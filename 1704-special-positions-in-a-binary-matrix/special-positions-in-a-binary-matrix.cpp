class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int ans = 0;

        for(int row=0; row<m; row++){
            for(int col=0; col<n; col++){
                if(mat[row][col]==0) continue;
                bool good = true;

                for (int i = 0; i < m; i++) {
                    if (i != row && mat[i][col] == 1) {
                        good = false;
                        break;
                    }
                }
                for (int j = 0; j < n; j++) {
                    if (j != col && mat[row][j] == 1) {
                        good = false;
                        break;
                    }
                }
                if(good) ans++;
            }
        }
        return ans;
    }
};