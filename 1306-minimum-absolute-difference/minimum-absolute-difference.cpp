class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int max=INT_MAX;
        vector<vector<int>> v1;
        vector<int> v2;
        for(int i=0;i<arr.size()-1;i++){
            int diff=abs(arr[i]-arr[i+1]);
            if(diff<=max){
                max=diff;
            }
        }

        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==max){
                v1.push_back({arr[i],arr[i+1]});
            }
        }
        return v1;
    }
};