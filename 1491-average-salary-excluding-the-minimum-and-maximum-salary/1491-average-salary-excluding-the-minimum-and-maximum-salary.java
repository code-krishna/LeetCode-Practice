class Solution {
    public double average(int[] salary) {
        
        int min = 0, max = 0;
        
        for(int i=0;i<salary.length;++i){
            min = salary[i] < salary[min] ? i : min;
            max = salary[i] > salary[max] ? i : max;
        }
        
        double sum=0, cnt=0;
        
        for(int i : salary){
            sum = i!=salary[min] && i!=salary[max] ? sum+i : sum;
            cnt = i!=salary[min] && i!=salary[max] ? cnt+1 : cnt;
        }
        
        return sum/cnt;
    
    }
}