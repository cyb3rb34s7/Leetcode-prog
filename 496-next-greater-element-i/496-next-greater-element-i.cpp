class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        stack<int> st ; 
        
        unordered_map<int,int> mp ; 
        int i = nums.size() -1 ; 
        
        while(i>=0) {
            if(st.empty()){
                mp[nums[i]] = -1 ; 
                st.push(nums[i]) ; 
                i-- ;
            }
            
            else if(!st.empty() and st.top()>nums[i]){
                mp[nums[i]] = st.top() ;
                st.push(nums[i]) ;
                i-- ;
            }
            else if(!st.empty() and st.top()<=nums[i])
                st.pop() ; 
        }
        
        for(int i=0 ;i<nums1.size();i++){
            nums1[i] = mp[nums1[i]] ;
        }
        
        return nums1;
    }
};