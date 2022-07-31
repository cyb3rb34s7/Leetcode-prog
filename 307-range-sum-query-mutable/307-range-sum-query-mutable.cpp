class NumArray {
public:
    vector<int> t ;
    
    int sum ; 
    NumArray(vector<int>& nums) {
        t = nums ;
        sum = accumulate(t.begin(),t.end(),0) ;
    }
    
    void update(int index, int val) {
        sum-=t[index] ;
        t[index] = val; 
        sum+=t[index] ;
    }
    
    int sumRange(int left, int right) {
        int ans = sum ; 
        
        for(int i=0;i<left;i++)
            ans-=t[i] ;
        for(int i=right+1;i<t.size();i++)
            ans-=t[i] ;
        return ans ;
        }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */