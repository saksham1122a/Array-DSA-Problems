<include iostream.io>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){ // Here target is the value we have to find by returning the intexes of number that have sum equal to target
        int n = nums.size(); // Finding the size of an array nums
        map<int , int> mp;  // Created a map to store value inside a map with it's corresponding index
                    // Here we need to use only a single for loop as we're using Hash Map the most optimized technique
        for(int i = 0; i<n; i++){
            int remaining = target - nums[i]; // Looking for the remaining value when we're starting from the index i, it will subtract the target value with the current value to find the remaining value from the array
            if(mp.find(remaining)!= mp.end()){  // If we already find the remaining value inside the array using iteration then we need to return it and obviously we don't need to go to the end of the array also
                return {mp[remaining], i};  // here we are returning the index of remaining value and the current value that is i
            }
// If In case we're unable to find the remaining value from the loop, we need to continue the loop by storing the value and index inside the table, most probably we sucessfully got the result in the above step 
        mp[nums[i]] = i;  // means we are storing the value with it's corresponding index
        }
        return {};
    }
}