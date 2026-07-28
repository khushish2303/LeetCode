class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int count = 1;
            for(char ch : s){
                if(ch == ' '){
                    count++;
                }
            }

            maxWords = max(maxWords, count);
        }

        return maxWords;
    }
};