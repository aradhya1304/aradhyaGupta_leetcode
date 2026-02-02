class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>arr;
        int sum=0;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            
            arr.push_back(sum);
        }
        int maximum =*std::max_element(arr.begin(), arr.end());
        if(maximum>0)
        {
        return  maximum;
        }
        else 
        return 0;
    }
};