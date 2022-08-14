class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size() ;
        stack<int> st ;
        
        
        vector<int> nsr(n) ; 
        
        int i =n-1; 
        
        while(i>=0){
            
            if(st.empty())
            {
                nsr[i] = n ; 
                st.push(i) ;
                i--;
            }
            else if(heights[st.top()] < heights[i])
            {
                nsr[i] = st.top() ;
                st.push(i) ;
                i--;
            }
            else
            {
                st.pop() ;
            }
        }
        stack<int> st2 ;
        i = 0;
        vector<int> nsl(n) ;
        while(i<n){
            
            if(st2.empty())
            {
                nsl[i] = -1 ; 
                st2.push(i) ;
                i++;
            }
            else if(heights[st2.top()] < heights[i])
            {
                nsl[i] = st2.top() ;
                st2.push(i) ;
                i++;
            }
            else
            {
                st2.pop() ;
            }
        }
        int ans = INT_MIN ;
        for(int i=0;i<n;i++){
             
            int area = (((nsr[i]-1) - (nsl[i]+1)) + 1 ) * heights[i] ; 
            ans = max(ans,area) ;
        }
        return ans ;
    }
};