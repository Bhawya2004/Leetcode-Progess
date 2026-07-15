class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        res.insert(res.end(),nums1.begin(),nums1.begin()+m);
        res.insert(res.end(),nums2.begin(),nums2.end());
        sort(res.begin(),res.end());
        nums1=res;
    }
};