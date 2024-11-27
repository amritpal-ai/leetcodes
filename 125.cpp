class Solution {
public:
    bool isPalindrome(string s) {
        string result,x;
        for (char c:s){
            if(isalnum(c)){
                result +=tolower(c);
            }
        }
      x=result;
        reverse(x.begin(),x.end());
        if(x==result){
            return 1;
        } else{
            return 0;
        }
    }
};