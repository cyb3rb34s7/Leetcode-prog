class Solution {
public:
    double myPow(double x, int n) {
        long long power=n;
        double ans=1.0;
        if(n<0) power= -1*power ;
        while(power>0){
            if(power%2==0){
                x= x*x ; 
                power=power/2;
            }
            else
            {
                ans=ans*x;
                power=power-1 ; 
            }
            
        }
        if(n<0) ans= (double)(1.0)/(double)(ans) ;
        return ans;
    }
};