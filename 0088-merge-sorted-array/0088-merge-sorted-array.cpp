class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m+n);
        int l=0,r=0,i=0;
        while(l<m && r<n){
            if(nums1[l]<=nums2[r]){
                nums3[i]=nums1[l];
                l++;
            }
            else{
                nums3[i]=nums2[r];
                r++;
            }
            i++;
        }
        while(l<m){
            nums3[i]=nums1[l];
            l++;
            i++;
        }
        while(r<n){
            nums3[i]=nums2[r];
            r++;
            i++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=nums3[i];
        }
    }
};