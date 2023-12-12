class Solution {
public:
    // Function to find the maximum product of two distinct elements in the 'nums' array
    int maxProduct(vector<int>& nums) {
        int biggest = 0;         // Variable to store the largest number in 'nums'
        int secondBiggest = 0;   // Variable to store the second largest number in 'nums'
        
        for (int num : nums) {   // Iterating through each number in 'nums'
            if (num > biggest) {
                // If the current number is greater than 'biggest',
                // update 'secondBiggest' and 'biggest'
                secondBiggest = biggest;
                biggest = num;
            } else {
                // If the current number is not greater than 'biggest',
                // update 'secondBiggest' if necessary (keeping track of the second largest)
                secondBiggest = max(secondBiggest, num);
            }
        }
        
        return (biggest - 1) * (secondBiggest - 1); // Return the product of (biggest - 1) and (secondBiggest - 1)
    }
};

