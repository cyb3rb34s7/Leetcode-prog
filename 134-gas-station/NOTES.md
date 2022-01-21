```
class Solution {
public:
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
int n = gas.size();
for(int i = 0; i<n; i++){
int total_diff=0 , counter=0, index=i;
while(counter<n){
total_diff+= gas[index%n]-cost[index%n];
if(total_diff<0)
break;
counter++; index++;
}
if(counter==n && total_diff>=0)
return i;
}
return -1;
}
};
```