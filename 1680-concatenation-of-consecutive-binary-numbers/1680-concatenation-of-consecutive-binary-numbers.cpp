class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long long result = 0;
        
        for(int i = 1; i <= n; i++) {
            int length = log2(i) + 1;
            
            result = ((result << length) % MOD + i) % MOD;
        }
        
        return result;
    }
};