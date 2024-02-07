class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        vector<pair<int,char>> vec1;
        for(auto y:mp){
            vec1.push_back({y.second,y.first});
        }
        sort(vec1.begin(),vec1.end(),greater<pair<int,char>>());
        string sorted="";
        for(auto z:vec1){
            while(z.first--){
                sorted+=z.second;
            }
        }
        return sorted;
    }
};