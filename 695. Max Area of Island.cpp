class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result = 0;
        int temp_result = 0;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[i].size();j++)
            {
                if(grid[i][j] == 0)
                    continue;
                temp_result = 0;
                queue<int> neighbor_x;
                queue<int> neighbor_y;
                neighbor_x.push(i);
                neighbor_y.push(j);
                grid[i][j] = 0;
                while(!neighbor_x.empty())
                {
                    int x = neighbor_x.front();
                    int y = neighbor_y.front();
                    
                    temp_result++;
                    neighbor_x.pop();
                    neighbor_y.pop();
                    if (x-1>=0 && grid[x-1][y])
                    {
                        grid[x-1][y] = 0;
                        neighbor_x.push(x-1);
                        neighbor_y.push(y);
                    }
                    if (y-1 >= 0 && grid[x][y-1])
                    {
                        grid[x][y-1] = 0;
                        neighbor_x.push(x);
                        neighbor_y.push(y-1);
                    }
                    if (x+1 <grid.size() && grid[x+1][y])
                    {
                        grid[x+1][y] = 0;
                        neighbor_x.push(x+1);
                        neighbor_y.push(y);
                    }
                    if (y+1 <grid[x].size() && grid[x][y+1])
                    {
                        grid[x][y+1] = 0;
                        neighbor_x.push(x);
                        neighbor_y.push(y+1);
                    }
                }
                result = max(result,temp_result);
            }
        }
        return result;
    }
};