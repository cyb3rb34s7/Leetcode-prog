class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto x:nums)
            st.insert(x);
        int maxi=0;
        for(auto x:nums){
            if(st.find(x-1)==st.end()){
                int curr=x;
                int streak=1;
                
                while(st.find(curr+1)!=st.end()){
                    curr+=1;
                    streak+=1;
                }
                maxi=max(maxi,streak);
            }
            
        }
        return maxi;
        
    }
};