class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int n = a.size()-1;
        for(int i=n; i>=0; i--){
            if(i==n){
                a[i]++;
            }
            if(a[i]==10){
                if(i!=0) {
                    a[i]=0;
                    a[i-1]++;
                }
                else{
                    a.push_back(0);
                    a[i]=1;
                }
            }
        }
        return a;
    }
};