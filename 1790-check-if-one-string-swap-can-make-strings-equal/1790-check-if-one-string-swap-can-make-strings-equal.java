class Solution {
    
    public boolean areAlmostEqual(String s1, String s2) {
        
        if(s1.length()!=s2.length()) return false;
        
        int a=-1, b=-1; 
        
        for(int i=0;i<s1.length();++i){
            
           if(s1.charAt(i)!=s2.charAt(i)){
               if(a!=-1 && b!=-1)
                   return false;
               if(a==-1) a=i;
               else if(b==-1) b=i;
           }
        }
        
        if((a!=-1 && b==-1) || (a==-1 && b!=-1))
            return false;
        
        if(a==-1 && b==-1)
            return true;
        
        if(s1.charAt(a) == s2.charAt(b) && s1.charAt(b) == s2.charAt(a))
            return true;
        
        else return false;
    }
}