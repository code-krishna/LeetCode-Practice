class Solution {
    
    public int mdist(int x1, int y1, int x, int y){
        
        return Math.abs(x1 - x) + Math.abs(y1 - y);
    }
    
    public int nearestValidPoint(int x, int y, int[][] points) {
        
        List<Integer> validIdx = new ArrayList<Integer>();
        
        for(int i=0;i<points.length;++i){
            if(points[i][0]==x || points[i][1]==y){
                validIdx.add(i);
                //System.out.println(i);
            }
        }
    
        
        if(validIdx.size()==0) return -1;
        
        int result = 100000, minDist = 100000;
        
        for(int i: validIdx){
            
            if(mdist(points[i][0], points[i][1], x, y) < minDist){
                minDist = mdist(points[i][0], points[i][1], x, y) ;
                result = i;
            }
            
            if(mdist(points[i][0], points[i][1], x, y) == minDist){
                if(result > i){
                    result = i;
                }
            }
            
        }
        
        return result;
    }
}