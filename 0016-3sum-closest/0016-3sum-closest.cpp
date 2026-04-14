class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max_diff=INT_MAX;
        int res_sum=0;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;

            while(l<r)
            {
                int sum=nums[l]+nums[r]+nums[i];
                int diff=abs(target-sum);
                if(diff < max_diff)
                {
                    max_diff=diff;
                    res_sum=sum;

                }
                 if(sum==target)
                 {
                    return sum;
                 }
                 else if(sum< target)
                 {
                    l++;
                 }
                 else
                 {
                    r--;
                 }
            }
        }
      return res_sum;

    }
};