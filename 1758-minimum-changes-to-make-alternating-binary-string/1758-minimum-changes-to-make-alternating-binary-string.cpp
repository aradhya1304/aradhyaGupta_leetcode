class Solution {
public:
    int minOperations(string s) {
        int change1 = 0; 
        int change2 = 0;         
        for(int i = 0; i < s.length(); i++) {
   
            if(s[i] != (i % 2 == 0 ? '0' : '1'))
                change1++;
            
    
            if(s[i] != (i % 2 == 0 ? '1' : '0'))
                change2++;
        }
        
        return min(change1, change2);
    }
};