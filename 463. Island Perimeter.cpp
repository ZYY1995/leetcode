class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for(int i = 0;i < grid.size();i++)
        {
            for(int j = 0;j < grid[i].size();j++)
            {
                if(grid[i][j])
                {
                    perimeter += i-1>=0 ? (1 - grid[i-1][j]):1;
                    perimeter += i+1<grid.size() ? (1 - grid[i+1][j]):1;
                    perimeter += j-1>=0 ? (1 - grid[i][j-1]):1;
                    perimeter += j+1<grid[i].size() ? (1 - grid[i][j+1]):1;
                }
            }
        }
        return perimeter;
    }
};