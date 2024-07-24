class Solution {
public:
    int digits(int num, vector<int>& m){
        if(num==0){
            return m[0];
        }
        vector<int> temp;
        while(num!=0){
            int r = num%10;
            temp.push_back(r);
            num = num/10;
        }
        int ans =0;
        for(int i = int(temp.size())-1;i>=0;i--){
            int a = m[temp[i]];
            ans = ans*10 + a; 
        }
        return ans;
    }

    static bool compare(pair<int,int>& a,pair<int,int>& b){
        if(a.first==b.first){
            return false;
        }
        return a.first<b.first;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
       vector<pair<int,int>> ans;
        for(int i =0;i<nums.size();i++){
            int val = digits(nums[i],mapping);
            cout<<val<<" "<<nums[i]<<endl;
            ans.push_back({val,nums[i]});
        }

        sort(ans.begin(),ans.end(),compare);

        vector<int> a;
        for(auto it: ans){
            a.push_back(it.second);
        }
        return a;
    }
};