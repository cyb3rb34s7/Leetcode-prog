class Solution {
public:
    bool isSubseq(string &a , string &b){
        int i = 0 , j = 0;
         
        while(j<b.size() && i<a.size()){
            if(a[i]==b[j])
            {
                i++; 
                j++;
            }
            else
                i++ ; 
        }
        
    return j==b.size() ; 
            
        
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt=0;
        unordered_map<string,int> mp ;
        
        for(int i=0;i<words.size();i++)
            mp[words[i]]++ ; 
        
        for(auto it:mp){
            string b = it.first ; 
            if(isSubseq(s,b))
                cnt+=it.second;
        }
        return cnt;
    }
};