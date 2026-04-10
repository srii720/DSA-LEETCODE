class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,max_len=0;
        std::unordered_map<char,int>ch;
        for(int i=0;i<s.size();i++){
           while(ch.count(s[i])){
            ch.erase(s[left]);
            left++;
           }
           ch[s[i]]=1;
           max_len=max(max_len,i-left+1);

        }return max_len;
        
    }
};