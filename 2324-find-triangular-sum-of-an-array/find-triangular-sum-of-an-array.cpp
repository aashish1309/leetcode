class Solution {
public:
    int val(vector<int>& nums,int n){
        if(n<=1){
            return nums[0];
        }
        for(int i=0;i<n-1;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
            }
        val(nums,n-1);
        return nums[0];
    }
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int n=nums.size();
        int result=val(nums,n);
        return result;
    }
};