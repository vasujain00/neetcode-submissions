class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        dfs(image[sr][sc],sr,sc,image.size(), image[0].size(),color,image);
        return image;
    }


    void dfs(int startColor, int sr, int sc, int m, int n, int color, vector<vector<int>>& image) {
        //base condition

        if(sr < 0 || sc < 0 || sr >= m || sc >= n || image[sr][sc]!=startColor) {
            return;
        }

        image[sr][sc] = color;
        dfs(startColor,sr+1,sc,m,n,color,image);
        dfs(startColor,sr,sc+1,m,n,color,image);
        dfs(startColor,sr-1,sc,m,n,color,image);
        dfs(startColor,sr,sc-1,m,n,color,image);
        dfs(startColor,sr,sc-1,m,n,color,image);

    }
};