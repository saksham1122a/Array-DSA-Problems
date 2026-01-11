// Kadane’s Algorithm (Maximum Subarray Sum)

int maxSubArray(vector<int>& nums){
    int currentSum = nums[0]; // Initialize current sum to the first element
    int maxSum = nums[0];     // Initialize max sum to the first element

    for(int i = 1; i< nums.size(); i++){
        currentSum = max(nums[i], currentSum + nums[i]);  // Here we decide whether to add the current element to the existing subarray or start a new subarray with the current element
        // nums[i] alone might be larger than currentSum + nums[i]?
        maxSum = max(maxSum, currentSum); // Update maxSum if currentSum is greater
    }
    return maxSum; // Return the maximum subarray sum found
}