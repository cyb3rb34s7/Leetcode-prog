class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q ; 
        
        for(auto x:stones)
            q.push(x) ; 
        
        while(!q.empty()) {
            if(q.size()==1)
                return q.top() ; 
            int num1 = q.top() ; 
            q.pop() ; 
            int num2 = q.top() ; 
            q.pop() ; 
            
            if(num1!=num2)
               { num2 = abs(num2-num1) ; 
                q.push(num2) ; }
        }
        return 0 ; 
    }
};