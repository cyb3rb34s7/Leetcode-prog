class Solution {
public:
    bool func(int ind,vector<int>&side,vector<int> &nums){
        if(ind<0)
            return side[0]==0 and side[1]==0 and side[2]==0 and side[3]==0 ;
        
        for(int i=0 ;i<4;i++){
            if(side[i]<nums[ind])
                continue ;
            
            side[i]-=nums[ind] ; 
            if(func(ind-1,side,nums)) return true;
            side[i]+=nums[ind] ; 
        }
        return false; 
        
                       
    }
    bool makesquare(vector<int>& nums) {
        int n =nums.size(); 
        
        int sum = accumulate(nums.begin(),nums.end(),0) ;
        
        if(sum % 4 != 0)
            return false;
        
         vector<int>side(4,sum/4) ; 
        
        sort(nums.begin(),nums.end()) ; 
        
        return func(n-1,side,nums) ; 
    }
};