class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size() ; 
        stack<int> s ; 
        vector<int> ans(n);  
        for(int i=n-1 ; i>=0 ;i--){
            while(s.size() > 0 and temperatures[i] >= temperatures[s.top()])
                s.pop();
            if(s.size() > 0) ans[i] = s.top() - i;
            else ans[i] = 0;
            s.push(i);
 
        }
        return ans;
    }
};