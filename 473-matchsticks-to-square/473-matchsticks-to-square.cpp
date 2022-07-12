class Solution {
public:
    bool func(int ind, int side1,int side2,int side3,int side4,vector<int> &nums){
        if(ind<0)
            return side1==0 and side2==0 and side3==0 and side4==0 ;
        
        if(side1<0 or side2<0 or side3<0 or side4<0)
            return false;
        
        return func(ind-1,side1-nums[ind] ,side2,side3,side4,nums) or
                func(ind-1,side1 ,side2-nums[ind],side3,side4,nums) or
                func(ind-1,side1 ,side2,side3-nums[ind],side4,nums) or
                func(ind-1,side1 ,side2,side3,side4-nums[ind],nums) ;
                
    }
    bool makesquare(vector<int>& nums) {
        int n =nums.size(); 
        
        int sum = accumulate(nums.begin(),nums.end(),0) ;
        
        if(sum % 4 != 0)
            return false;
        int side = sum/4 ; 
        sort(nums.begin(),nums.end()) ; 
        
        return func(n-1,side,side,side,side,nums) ; 
    }
};