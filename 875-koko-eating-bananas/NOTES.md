```
class Solution {
public:
int minEatingSpeed(vector<int>& piles, int h) {
int n = piles.size();
sort(piles.begin(),piles.end());
int maxrange= piles[n-1],k=1;
while(k<=maxrange){
int sum = 0;
for(int i=0;i<n;i++)
{
if(piles[i]%k!=0)
sum+=(piles[i]/k)+1;
else
sum+=piles[i]/k;
if(sum>h)
break;
else
continue;
}
if(sum==h)
return k;
else
k++;
}
return k;
}
};
```