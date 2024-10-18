class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int k = 0;
        int l = 0;
        vector<int> combine;

        while(k < nums1.size() && l < nums2.size()){
            if(nums1[k] < nums2[l]){
                combine.push_back(nums1[k]);
                k++;
            } else {
                combine.push_back(nums2[l]);
                l++;
            }
        }

        while(k < nums1.size()){
            combine.push_back(nums1[k]);
            k++;
        }

        while(l < nums2.size()){
            combine.push_back(nums2[l]);
            l++;
        }

        int n = combine.size();
        if (n % 2 == 0) {
            return (combine[n/2 - 1] + combine[n/2]) / 2.0;
        } else {
            return combine[n/2];
        }
    }
};
