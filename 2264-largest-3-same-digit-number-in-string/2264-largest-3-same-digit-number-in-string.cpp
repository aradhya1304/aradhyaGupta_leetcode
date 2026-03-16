class Solution {
public:
    string largestGoodInteger(string num) {
        string st="";
        
        for(int i=0;i+2<num.size();i++)
        {
                if(num[i]==num[i+1]&& num[i]==num[i+2])
                {
                   string candiate=num.substr(i,3);
                
                    if(candiate>st)
                    {
                        st=candiate;
                    }

                }
              
            }
        
        return st;
        
    }
};