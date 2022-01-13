class Solution {
public:
    bool isAnagram(string s1, string s2) {
        if(s1.length()!=s2.length())
        return false;
        unordered_map<char,int> mp;
        for(auto x:s1){
            mp[x]++;
        }
        for(auto x:s2)
        {
            if(mp[x]>0)
                mp[x]--;
            else
                return false;
        }
        return true;
    }
};