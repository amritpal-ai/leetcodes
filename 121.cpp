#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprice =0;
        for (int i=1;i<prices.size();i++){
            minprice = min(minprice,prices[i]);
            maxprice= max(maxprice,prices[i]-minprice);
        } return maxprice;
    } 
};