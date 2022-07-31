class NumArray {
public:
    vector<int> tree ;
    int n ;
    NumArray(vector<int>& nums) {
        if(nums.size())
        {
            n = nums.size() ; 
            vector<int> t(2*n) ;
            tree = t ;
        }
        
        for(int i=n,j=0 ;i<2*n;i++,j++){
            tree[i] = nums[j] ;
        }
        for(int i =n-1 ;i>0 ;i--){
            tree[i] = tree[i*2] + tree[(2*i) + 1] ;
            
        }
        
        
    }
     
        
    
    
    void update(int index, int val) {
        index+=n ; 
        tree[index] = val ;
        while(index>0){
            
            int left = index ;
            int right = index ;
            if(index%2==0)
                right = index+1 ;
            else
                left = index - 1 ; 
            
            tree[index/2] = tree[left] + tree[right] ;
            index/=2 ;
        }
        
    }
    
    int sumRange(int left, int right) {
        left += n ;
        
        right += n ;
        
        int sum =0 ;
        while(left<=right){
            
            if(left%2==1) //it is right child of someone
            {
                sum+=tree[left] ; 
                left++ ;
            }
            if(right%2==0)
            {
                sum+=tree[right] ;
                right-- ;
            }
            left/=2 ;
            right/=2 ;
        }
        return sum ;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */