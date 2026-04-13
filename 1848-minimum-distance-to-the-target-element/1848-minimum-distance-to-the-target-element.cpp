class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int>arr;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                arr.push_back(i);

            }
        }
        int n=arr.size();
        for(i=0;i<n;i++)
        {
            arr[i]=abs(arr[i]-start);
        }
        int minVal = *min_element(arr.begin(), arr.end());
        return minVal;
    }
};