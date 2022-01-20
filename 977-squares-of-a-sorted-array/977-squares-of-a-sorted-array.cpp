class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int l=0,r=n-1;
        for(int i=n-1;i>=0;i--){
           res[i]= abs(nums[l])>abs(nums[r]) ? nums[l]*nums[l++]: nums[r]*nums[r--];
        }
        return res;
    }
};