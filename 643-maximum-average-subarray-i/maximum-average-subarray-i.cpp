class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        double max_avg=INT_MIN;
        double sum=0;
        for(int r=0; r<nums.size(); r++){
            sum+=nums[r];
            if(r-l+1==k){
                double avg=sum/k;
                max_avg=max(max_avg, avg);
                sum-=nums[l];
                l++;
            }
        }
        return max_avg;
    }
};