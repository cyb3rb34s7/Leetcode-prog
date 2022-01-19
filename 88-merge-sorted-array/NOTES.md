class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int l = m-1,k=m+n-1;
for( int i =m ;i<m+n;i++ ){
swap (nums1[i],nums2[n-i]);
}
while(l>0 && k>0){
if(nums1[l]>nums1[k])
{
swap(nums1[l],nums1[k]);
k--;
}
else
{
k--;
}
}
}
};