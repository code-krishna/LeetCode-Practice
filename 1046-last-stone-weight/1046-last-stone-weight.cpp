class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> q;
        
        int res=0, x=-1, y=-1;
        
        for(int i=0;i<stones.size();++i){
            q.push(stones[i]);
        }
        
        while(q.size()>=2){
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();
            if(x==y){
                x=-1; y=-1;
            } else if(x<=y){
                y = y-x;
                x=-1;
                q.push(y);
            } else{
                x = x-y;
                y=-1;
                q.push(x);
            }
        }
        
        if(q.size()>0){
            res = q.top();
        }
        return res;
    }
};