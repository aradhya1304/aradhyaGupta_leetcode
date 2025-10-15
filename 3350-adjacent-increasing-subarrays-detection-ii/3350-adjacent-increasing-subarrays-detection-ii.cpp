class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int i = 1, pre = 0, cur = 1, ans = 1;

        while (i < n) {
            while (i < n && nums[i - 1] < nums[i]) {
                cur++;
                i++;
            }

            int x = -1;
            if (pre < cur / 2) {
                x = cur / 2;  
            } else {
                x = min(pre, cur); 
            }

            ans = max(ans, x);  
            pre = cur;          
            cur = 1;            
            i++;                
        }

        return ans;
    }
};