class StockSpanner {
public:
    stack<pair<int,int>> st ;
    int cnt = 0 ;
    int last = 0 ; 
    StockSpanner() {
        
    }
    
    int next(int price) {
        while(!st.empty() && st.top().first<=price)
            st.pop();
        if(st.empty())
        {   int ans = cnt - last + 1 ;
            st.push({price,cnt}) ; 
            cnt++ ;
            return ans ;
        }
        
        if(st.top().first > price)
           {
            int ind = cnt -  st.top().second ; 
            st.push({price,cnt}) ;
            cnt++  ;
            return ind ;
           }
        
        return -1 ;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */