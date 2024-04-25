class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>m;
        if(intervals.size()==0)
        {
            return m;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tmp=intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=tmp[1])
            {
                tmp[1]=max(it[1],tmp[1]);
            }
            else
            {
                m.push_back(tmp);
                tmp=it;
            }
        }
        m.push_back(tmp);
        return m;
    }
};