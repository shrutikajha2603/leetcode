class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), neg=0;
        int row=0, col=n-1;
        while(row<m && col>=0){
            if(grid[row][col]>=0){
                ++row;
            }
            else{
                neg+=(m-row);
                col--;
            }
        }
        return neg;
    }
};