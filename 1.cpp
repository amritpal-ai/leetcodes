#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; // Vector to store indices of the two numbers

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) { // Check if their sum matches the target
                    result.push_back(i); // Push index of the first number
                    result.push_back(j); // Push index of the second number
                    return result; // Return the result as the problem guarantees a solution
                }
            }
        }

        return result; // In case no solution (this won't occur as per the problem statement)
    }
};



