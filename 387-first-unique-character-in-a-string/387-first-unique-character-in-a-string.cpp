class Solution {
public:
    int firstUniqChar(string s) {
       int mp[26]={0};
        for(auto x:s){
            mp[x-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};