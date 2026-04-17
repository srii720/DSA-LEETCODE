class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int>mp;
        int size1=s.size();
        int size2=t.size();
        if(size1!=size2)return false;

        for(char x:s){
            mp[x]++;
        }
        for(char x:t){
            if(mp[x]==0)return false;
            mp[x]--;
        }
       return true;
        
    }
};