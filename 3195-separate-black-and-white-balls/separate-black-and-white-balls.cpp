class Solution {
public:
    long long minimumSteps(string s) {
        long long blackCount=0;
        long long swapCount=0;

        for(char ch : s){
            if(ch=='0'){
                swapCount+=blackCount;
                
            }else if(ch=='1'){
                blackCount++;
            }
        }
        return swapCount;
        
    }
};