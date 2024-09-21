class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        vector <int> ans;
        int i=0;
        while(i<m){
            for(int j=0; j<n; j++){
                if (arr1[j]==arr2[i]){
                    ans.push_back(arr1[j]);
                    arr1[j]=-1;
                }
            }
            i++;
        }
        int size = ans.size();
        for(int i=0; i<n; i++){
            if(arr1[i]>-1)
            ans.push_back(arr1[i]);
        }
        sort(ans.begin()+size, ans.end());
        return ans;
    }
};