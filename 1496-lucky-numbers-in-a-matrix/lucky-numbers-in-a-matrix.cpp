class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0; i<m; i++){
            int minRow = INT_MAX;
            int colIndex = -1;

            for(int j=0; j<n; j++){
                if(matrix[i][j]<minRow){
                    minRow = matrix[i][j];
                    colIndex = j;
                }
            }

            bool isLargest = true;
            for(int k=0; k<m; k++){
                if(matrix[k][colIndex]>minRow){
                    isLargest = false;
                    break;
                }
            }
            if(isLargest){
                result.push_back(minRow);
            }
        }
        return result;
    }
};