class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size() ;
        sort(nums.begin(),nums.end()) ;
        vector<vector<int>> res ;
        set<vector<int>> store;
        for(int i =0;i<n;i++){
            for(int j=i+1 ;j<n ;j++){
                int target2= target-nums[i]-nums[j];
                int x=j+1 ,y=n-1;
                
                while(x<y){
                    if(target2> nums[x]+nums[y]) x++;
                    else if (target2< nums[x]+nums[y]) y--;
                    else{
                        store.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++; y--;
                    }
                }
            }
        }
        for(auto q:store)
            res.push_back(q);
        return res;
    }
};