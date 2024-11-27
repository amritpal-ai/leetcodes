#include <unordered_set>
#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        int leftprod=1;
        for (int i=0;i<n;i++){
            answer[i]*=leftprod;
            leftprod*=nums[i];
        }
        int rightprod=1;
        for (int i=n-1;i>=0;i--){
            answer[i]*=rightprod;
            rightprod*=nums[i];
        }

        return answer;
    }
};