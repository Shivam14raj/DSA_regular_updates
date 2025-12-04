class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size(); 
        
        // row wise traversing-->> coz checking right and bottom for each cell 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                // vertical check
                if(i+1<n && grid[i][j]!=grid[i+1][j]) return false; 

                // horizontal check
                if(j+1<m && grid[i][j]==grid[i][j+1]) return false;
            }
        }
        return true; 
    }
};