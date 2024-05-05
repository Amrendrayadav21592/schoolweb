class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums), ans = INT_MIN;
        for(int i = 0; i < n; i++) 
            for(int j = i, curSum = 0; j < n ; j++) 
                curSum += nums[j],
                ans = max(ans, curSum);        
        return ans;
    }
};

 /*EXPLANATION and video link - https://youtu.be/Id_hZTV7_IA
 
 1. The code begins by defining a class named "Solution".
2. Inside the class, a function named "maxSubArray" is defined. This function takes in a vector of integers named "nums" as a parameter and returns an integer.
3. The first line inside the function calculates the size of the "nums" vector and assigns it to the variable "n".
4. The variable "ans" is initialized with the minimum possible value for an integer, which is INT_MIN. This variable will store the maximum subarray sum.
5. Following that, a nested for loop is implemented. The outer loop iterates over each element in the "nums" vector.
6. Inside the outer loop, the inner loop begins from the current index and iterates till the end of the "nums" vector.
7. Within the inner loop, a variable named "curSum" is initialized with 0. This variable stores the current sum of the subarray.
8. After that, the current element at index "j" is added to the "curSum".
9. The "ans" variable is updated by taking the maximum value between its current value and "curSum". This ensures that "ans" always stores the maximum subarray sum.
10. After the inner loop finishes, the outer loop moves to the next element, and the process repeats.
11. Once both loops have finished iterating over all possible subarrays, the maximum subarray sum stored in the "ans" variable is returned as the result of the function.*/