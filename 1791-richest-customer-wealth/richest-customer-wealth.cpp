class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        int wealth=0;
        for(int i=0; i<m; i++){
            int cw=0;
            for(int j=0; j<n; j++){
                cw+=accounts[i][j];
            }
            wealth=max(cw, wealth);
        }
        return wealth;
    }
};