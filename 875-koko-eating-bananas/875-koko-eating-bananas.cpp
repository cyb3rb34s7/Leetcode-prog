class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 , r= *max_element(piles.begin(),piles.end()); 
        int res= r;
        while(l<=r){
            int k= l+ (r-l)/2;
            int sum = 0;

            for(auto x:piles){
                if(x%k!=0)
                    sum+=(x/k)+1;
                else
                    sum+=x/k;
                
                if(sum>h)
                    break;
                else 
                    continue;
            }
            
            if(sum<=h)
            {
                res=min(res,k);
                r= k-1;
            }
            else
                l=k+1;
                
        }
        return res;
    }
};