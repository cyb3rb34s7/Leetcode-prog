class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size() ;
        queue<string> q ; 
        unordered_set<string> st ;
        
        for(auto x:wordList)
            st.insert(x) ;
        if(st.find(endWord)==st.end())
            return 0 ;
        int depth = 0 ; 
        q.push(beginWord) ;
        
        while(!q.empty()){
            depth++ ;
            int level = q.size() ;
            
            while(level--){
                string s = q.front() ;
                
                q.pop(); 
                
                for(int i=0;i<s.length();i++){
                    string temp = s ;
                    for(char c ='a' ;c<='z';c++){
                        temp[i] = c ;
                        if(temp==s) continue;
                        
                        if(st.find(temp)!=st.end())
                        {
                            q.push(temp) ;
                            st.erase(temp) ;
                        }
                        if(temp==endWord)
                            return depth+1 ;
                    }
                    
                }
                
            }
        }
        return 0 ;
        
        
    }
};