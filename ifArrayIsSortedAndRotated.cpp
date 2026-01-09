class Solution{
    public:
    bool check(vector<int>& nums){
        int count = 0; // count of rotations if it is equal to 0 or 1 then it is sorted and rotated
        int n = nums.size();  // size of the array
        for(int i = 1; i<n; i++){
            if(nums[i] < nums[i-1]){   // check if current element is less than previous element
                count++;
            }
           if(nums[0] < nums[n-1]){   // check if first element is less than last element
                count++;

           }
        }
        return count <=1;  // if count is less than or equal to 1 then return true else false
    }
}