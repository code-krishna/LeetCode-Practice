class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int oldColor = image[sr][sc];
        vector<vector<int>> visited;
        
        for(int i=0;i<image.size();++i){
            vector<int> tmp;
            for(int j=0;j<image[0].size();++j){
                tmp.push_back(0);
            }
            visited.push_back(tmp);
        }
        
        floodFillUtil(image, sr, sc, newColor, visited, oldColor);
        
        return image;
    }
    
    void floodFillUtil(vector<vector<int>>& image, int sr, int sc, int newColor, vector<vector<int>>& visited, int oldColor){
        
        if(visited[sr][sc]) return;
        
        visited[sr][sc] = 1;
            
        image[sr][sc] = newColor;
        
        int i=sr, j=sc;
        
        if(i<image.size()-1)
            if(image[i+1][j]==oldColor)
                floodFillUtil(image, i+1, j, newColor, visited, oldColor);
        
        if(i>0)
            if(image[i-1][j]==oldColor)
                floodFillUtil(image, i-1, j, newColor, visited, oldColor);
        
        if(j<image[0].size()-1)
            if(image[i][j+1]==oldColor)
                floodFillUtil(image, i, j+1, newColor, visited, oldColor);
            
        if(j>0)
            if(image[i][j-1]==oldColor)
                floodFillUtil(image, i, j-1, newColor, visited, oldColor);
        
        return;
        
    }
};