class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int oldColor = image[sr][sc];
        
        if(oldColor==newColor) return image;
        
        floodFillUtil(image, sr, sc, newColor, oldColor);
        
        return image;
    }
    
    void floodFillUtil(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor){
        
        if(image[sr][sc] == newColor) return;
        
        image[sr][sc] = newColor;
        
        int i=sr, j=sc;
        
        if(i<image.size()-1)
            if(image[i+1][j]==oldColor)
                floodFillUtil(image, i+1, j, newColor, oldColor);
        
        if(i>0)
            if(image[i-1][j]==oldColor)
                floodFillUtil(image, i-1, j, newColor, oldColor);
        
        if(j<image[0].size()-1)
            if(image[i][j+1]==oldColor)
                floodFillUtil(image, i, j+1, newColor, oldColor);
            
        if(j>0)
            if(image[i][j-1]==oldColor)
                floodFillUtil(image, i, j-1, newColor, oldColor);
        
        return;
        
    }
};