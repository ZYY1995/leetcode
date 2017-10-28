class Solution {
public:
    int AreaOfIsland(vector<vector<int>>& grid,int i,int j) {
        if(i >= 0 && i < grid.size() && j >= 0 && j < grid[i].size() && grid[i][j])
        {
            grid[i][j] = 0;
            return 1 + AreaOfIsland(grid,i+1,j) + AreaOfIsland(grid,i-1,j) + AreaOfIsland(grid,i,j+1) + AreaOfIsland(grid,i,j-1);
        }
        return 0;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result = 0;
        int temp_result = 0;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[i].size();j++)
            {
                result = max(result,AreaOfIsland(grid,i,j));
            }
        }
        return result;
    }
};