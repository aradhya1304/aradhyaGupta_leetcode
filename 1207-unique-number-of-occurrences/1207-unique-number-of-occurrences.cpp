class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num:arr)
        {
            freq[num]++;
        }
        unordered_set<int>xyz;
        for(auto pair:freq)
        {
          if(xyz.count(pair.second))
          {
           return false;
          }
          else
          {
            xyz.insert(pair.second);
          }
        }
        return true;
    }
};