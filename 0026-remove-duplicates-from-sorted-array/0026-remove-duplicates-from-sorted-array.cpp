class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0;
        int i=0,j=1, count=1;
        while(j<nums.size())
        {
            if(nums[j]==nums[j-1])
            {
                j++;
                continue;
            }
            nums[i+1]=nums[j];
            i++;
            count++;
            j++;
        }
        return count;
    }
};
