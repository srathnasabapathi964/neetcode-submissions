class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;
        
        for(int i = 0;i<strs.size();i++){
            string key = strs[i];
            vector<int>count(26,0);
            for(int j = 0;j<key.size();j++){
               count[key[j]-'a']++;
            }
          string mainkey = to_string(count[0]);
        
        for(int i = 1;i<26;i++){
            mainkey += ','+ to_string(count[i]); 
        }
    
    mpp[mainkey].push_back(strs[i]);
        }

vector<vector<string>>result;

for(auto it = mpp.begin();it!=mpp.end();it++){
result.push_back(it->second);
}


return result;
    }
};
