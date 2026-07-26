class Solution {
public:
   long long mod = 1e9+7;
    
    long long power(long long a,long long b){
        long long ans = 1;
        while(b>0){
            if(b&1) ans = (ans*a)%mod;
            a = (a*a)%mod;
            b = b/2;
        }
        return ans;
    }
    int countValidSequences(int n, int k) {
         vector<long long> fact(2*n);
        long long mul = 1;
        fact[0] = 1;
        for(int i=1;i<2*n;i++){
            mul = (mul*i)%mod;
            fact[i] = mul;
        }

        int x = n-k;
        if(x == 0) return 0;

        long long tot = ((fact[x+k-1]*power(fact[k-1],mod-2))%mod)*power(fact[x],mod-2)%mod;
        if(x%2 != 0) return tot;
        int y = x/2;
        long long sub = ((fact[y+k-1]*power(fact[k-1],mod-2))%mod)*power(fact[y],mod-2)%mod;
        return (tot-sub+mod)%mod;
        
    }
};