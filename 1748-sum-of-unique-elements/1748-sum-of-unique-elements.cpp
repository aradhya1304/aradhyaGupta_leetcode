class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
   unordered_map<int,int>freq;
   for(int num:nums)
   {
    freq[num]++;
    }
    for(auto pair:freq)
   { 
    if(pair.second==1)
    {
        sum=sum+pair.first;
    }
   }
     return sum;

    }
    
};