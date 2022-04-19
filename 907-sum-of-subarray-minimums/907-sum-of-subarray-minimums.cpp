class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size() ; 
        stack<int> s ;
        
        vector<long> prevSmaller(n); 
        vector<long> nextSmaller(n); 
        
        
        for(int i =0 ; i<n ; i++){
            while(s.size() > 0 and arr[s.top()] >= arr[i])
                s.pop();
            if(s.empty())
                prevSmaller[i] = -1 ;
            else
                prevSmaller[i] = s.top(); 
            s.push(i) ;
        }
        
        while(!s.empty())
            s.pop();
        
        for(int i =n-1 ;i>=0 ;i--){
            while(s.size() > 0 && arr[s.top()] > arr[i])
                s.pop();
            if(s.empty())
                nextSmaller[i]= n;
            else
                nextSmaller[i] = s.top();
            s.push(i);
        }
        long sum = 0;
        for(int i =0;i<n;i++){
            sum += arr[i] * (nextSmaller[i] - i) * (i - prevSmaller[i]) ;
            sum %= 1000000007;
        }
        return (int)sum;
        
        
        
    }
};