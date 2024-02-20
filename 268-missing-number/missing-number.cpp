class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++){
            if(i!=nums[i]){
                return i;
            }
            if(i==len-1){
                return i+1;
            }
        }
        return 0;
    }
};