class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int fullWeeks = n / 7; 
        int remainingDays = n % 7;  

        for (int week = 0; week < fullWeeks; ++week) {
            for (int day = 1; day <= 7; ++day) {
                total += day + week;
            }
        }

        for (int day = 1; day <= remainingDays; ++day) {
            total += day + fullWeeks;
        }

        return total;
    }
};
