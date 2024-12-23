#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        unordered_map<char, int> charIndex;
        int start = 0;              
        int maxlength = 0;          
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];
            if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
                start = charIndex[currentChar] + 1; 
            }

            charIndex[currentChar] = i; 
            maxlength = max(maxlength, i - start + 1);
        }

        return maxlength; 
    }
};
