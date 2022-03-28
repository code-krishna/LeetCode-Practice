class Solution {
    
    boolean isAnagram(String s1, String s2) {  
        boolean status = true;  
        if (s1.length() != s2.length()) {  
            status = false;  
        } else {  
            char[] ArrayS1 = s1.toLowerCase().toCharArray();  
            char[] ArrayS2 = s2.toLowerCase().toCharArray();  
            Arrays.sort(ArrayS1);  
            Arrays.sort(ArrayS2);  
            status = Arrays.equals(ArrayS1, ArrayS2);  
        }  
        return status;
    }  
    
    public boolean areAlmostEqual(String s1, String s2) {
        
        if(!isAnagram(s1,s2)) return false;
        
        int r=0; 
        
        for(int i=0;i<s1.length();++i){
            
            if(s1.charAt(i)!=s2.charAt(i)) r++;
            
            if(r>2) return false;
        }
        
        return true;
    }
}