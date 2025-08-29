class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int mid1,mid2;
        float mid;
        float temp;
        int low=0,high=0;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        high=nums1.size()-1;
        sort(nums1.begin(),nums1.end());
        if (nums1.size() % 2==0){
            mid=(low+high)/2.0;
            mid1=floor(mid);
            mid2=ceil(mid);
            temp=(nums1[mid1]+nums1[mid2])/2.0;
        } else
        {
            mid=(low+high)/2.0;
            temp=nums1[mid];
        }
        return temp;
    }
};