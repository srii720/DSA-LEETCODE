class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp; //finder ho yooo
        
        for(int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];//tester ho yo
            
            if(mp.find(complement) != mp.end()) {//basic find ko logic ho yo
                return {mp[complement], i};//index raw complement return garya
            }
            
            mp[arr[i]] = i;//remembering pattern yedi feri aarko janmavet yavo vanay
        }
        
        return {};//xaina vanay hai maya yeslai return gra lah
    }
};