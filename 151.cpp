class Solution {
public:
    string reverseWords(string s) {
        string temp,result;
        vector<string> words;
        int start=0;
        int end=s.length()-1;
        while(start<=end && s[start]==' ')
        start ++;
        while(end>=start && s[end]==' ')
        end--;
        for(int i=start;i<=end;i++){
            if(s[i]!=' '){
                temp += s[i];
            } else {
                if(!temp.empty()){
                    words.push_back(temp);
                    temp.clear();
                }
            }
        }
        if(!temp.empty())
        {
            words.push_back(temp);
         }
         for(int i=words.size()-1;i>=0;i--){
            result+=words[i];
            if(i!=0){
                result+=" ";
            }
         }
         return result;

    }
};  