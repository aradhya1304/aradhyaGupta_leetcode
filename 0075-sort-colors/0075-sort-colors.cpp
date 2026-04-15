class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid=0,n=nums.size();
        int high=n-1;
        while(mid<high)
        {
        for(int i=0;i<n;i++)
        {   
            if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
            else if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else
            {
                mid++;
            }
        }
        }
           
    }
};