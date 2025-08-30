class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int> leftmax(n),rightmax(n);

        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }

        rightmax[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--){
            rightmax[j]=max(rightmax[j+1],height[j]);
        }

        int temp=0;
        for (int k=1;k<n;k++){
            temp+= min(leftmax[k],rightmax[k])-height[k];
        }

        return temp;
    }
};