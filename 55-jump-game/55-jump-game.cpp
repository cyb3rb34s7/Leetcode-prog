class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size() ;
        if(n==1) return true;
        int possible = -1 ;
        
        for(int i=0;i<n-1;i++){
            if(i+nums[i]>=nums.size()-1)
            {possible = i ;
             break;
             }
        }
        if(possible==-1)
            return false;
        while(possible>0){
            int temp = possible ;
             
            for(int i=0;i<possible;i++){
                if(i+nums[i]>=possible){
                    possible = i ;
                    
                        break ;
                }
            }
            if(possible==temp)
                return false;
        }
        return true;
        
    }
};