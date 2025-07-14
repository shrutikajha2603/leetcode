class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tcost=0, tgas=0;
        for(int i=0; i<gas.size(); i++){
            tgas+=gas[i];
            tcost+=cost[i];
        }

        if(tgas<tcost){
            return -1;
        }
        int curgas=0;
        int start=0;

        for(int i=0; i<gas.size(); i++){
            curgas+=gas[i]-cost[i];
            if(curgas<0){
                curgas=0;
                start=i+1;
            }
        }
        return start;
    }
};