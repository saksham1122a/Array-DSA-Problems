
class Solution{
    public:
    int removeDuplicates(vector<int>& nums){
        if(nums.size()== 0) return 0;
        int index = 1; // index to place the next unique element
        for(int i =1; i< nums.size(); i++){
            if(nums[i] != nums[i-1]){ // check if current element is different from the previous one.
                nums[index] = nums[i]; // place the unqiue element at the index position
                index++; // increment the index for next unique element
        }
    }
    return index; // return the count of unique elements
}
};