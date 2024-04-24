class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums2.size();
        double res;

        for (int i = 0; i < len; i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        int len2 = nums1.size();
        int n = len2 / 2;

        if (len2 % 2 == 0) {
            res = (nums1[n] + nums1[n - 1]) / 2.0;
            return res;
        } else {
            return nums1[n];
        }
    }
};
