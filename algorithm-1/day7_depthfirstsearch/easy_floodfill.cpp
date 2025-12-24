class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int start = image[sr][sc];
        if(start!=color)
        {coloring(image, sr, sc, color);}
        return image;
    }
    void coloring(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int base = image[sr][sc];
        image[sr][sc] = color;
        if(sr >= 1 && image[sr-1][sc]==base)
        {coloring(image, sr-1, sc, color);}
        if(sc >= 1 && image[sr][sc-1]==base)
        {coloring(image, sr, sc-1, color);}
        if(sc < image[0].size()-1 && image[sr][sc+1]==base)
        {coloring(image, sr, sc+1, color);}
        if(sr < image.size()-1 && image[sr+1][sc]==base)
        {coloring(image, sr+1, sc, color);}
    }
};
