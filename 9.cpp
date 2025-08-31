class Solution {
public:
    bool isPalindrome(int x) {
        string temp1,temp2;
        temp1 = to_string(x);
        temp2=temp1;
        reverse(temp1.begin(),temp1.end());
        if (temp1==temp2){
            return 1;
        }
        else {
            return 0;
        }
    }
};