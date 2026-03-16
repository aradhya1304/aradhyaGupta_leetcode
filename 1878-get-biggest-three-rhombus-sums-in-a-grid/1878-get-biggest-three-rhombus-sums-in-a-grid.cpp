class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        set<int, greater<int>> st;

        for(int r = 0; r < m; r++){
            for(int c = 0; c < n; c++){

                st.insert(grid[r][c]); // size 0 rhombus

                for(int k = 1; r+2*k < m && c-k >=0 && c+k < n; k++){

                    int sum = 0;

                    int x=r, y=c;

                    // down-left
                    for(int i=0;i<k;i++){
                        sum += grid[x+i][y-i];
                    }

                    // down-right
                    for(int i=0;i<k;i++){
                        sum += grid[x+k+i][y-k+i];
                    }

                    // up-right
                    for(int i=0;i<k;i++){
                        sum += grid[x+2*k-i][y+i];
                    }

                    // up-left
                    for(int i=0;i<k;i++){
                        sum += grid[x+k-i][y+k-i];
                    }

                    st.insert(sum);
                }
            }
        }

        vector<int> ans;

        for(auto x : st){
            ans.push_back(x);
            if(ans.size()==3) break;
        }

        return ans;
    }
};