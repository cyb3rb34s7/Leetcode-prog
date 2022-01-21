class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total=0, tank = 0 ,index=0; 
        for(int i = 0; i<n; i++){
            int consume = gas[i]-cost[i];
            tank+=consume;
            if(tank<0){
                index=i+1;
                tank=0;
            }
            total+=consume;
        }
        if(total<0)
            return -1;
        return index;
        
    }
};