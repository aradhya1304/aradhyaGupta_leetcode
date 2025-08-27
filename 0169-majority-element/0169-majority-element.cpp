class Solution {
public:
    int majorityElement(vector<int>& nums) {
           unordered_map<int, int> freq;
        int n = nums.size() / 2;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > n) {
                return num;
            }
        }
        return -1;
    }
};