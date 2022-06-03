class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(), x,y, cx=0,cy=0;
        
        for(auto p:nums){
            if(p==x)
                cx++;
            else if(p==y)
                cy++;
            else if(cx==0)
            {x=p;
             cx=1;
            }
            else if(cy==0)
            {
                y=p;
                cy=1;
            }
            
            else
            {
                cx--; 
                cy--;
            }
          cout<<x<<" "<<y<<endl;
        }
        vector<int> ans;
        cx=cy=0;
        for(auto p:nums){
            if(p==x)
                cx++;
            if(p==y)
                cy++;
        }
        if(cx>n/3) ans.push_back(x);
        if(cy>n/3) ans.push_back(y);
        
        return ans;
        
        
        
    }
};