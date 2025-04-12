class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
    
        for(int i=0;i<strs.size();i++){
        string key = strs[i];
        sort(key.begin(),key.end());
        mp[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        unordered_map<string,bool> added;
    
        for(int i=0;i<strs.size();i++){
        string key=strs[i];
        sort(key.begin(),key.end());
        if(added.count(key)==0){
        result.push_back(mp[key]);
        added[key]= true; 
        if (result.size()==mp.size())
        break;
        }}
    return result; }
        
    };