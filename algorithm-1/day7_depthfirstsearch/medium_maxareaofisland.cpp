#include <algorithm>
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result = 0;
        for(int i = 0; i<grid.size(); i++)
        {
            for(int j = 0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    result=max(search(grid, i, j), result);
                }
            }
        }
        return result;
    }
    int search(vector<vector<int>>& grid, int i, int j)
    {
        grid[i][j] = 0;
        int sum = 1;
        if(i>=1 && grid[i-1][j]==1)
        {sum += search(grid, i-1, j);}
        if(j>=1 && grid[i][j-1]==1)
        {sum += search(grid, i, j-1);}
        if(i<grid.size()-1 && grid[i+1][j]==1)
        {sum += search(grid, i+1, j);}
        if(j<grid[0].size()-1 && grid[i][j+1]==1)
        {sum += search(grid, i, j+1);}
        return sum;
    }
};
