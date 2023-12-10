class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int newtime=arrivalTime+delayedTime;
        return newtime%24;

    }
};