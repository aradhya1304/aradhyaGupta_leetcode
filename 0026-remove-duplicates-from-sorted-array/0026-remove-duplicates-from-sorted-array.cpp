class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;

        int i = 0;  // slow pointer

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];  // place unique element at next position
            }
        }
        return i + 1; // length of unique array
    }
};
