class Solution {
private:
    bool valid(char ch) {
        if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        return 0;
    }

    char toLowerCase(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        }
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string a) {
        int start = 0;
        int end = a.length() - 1;

        while(start <= end){
            if(a[start] != a[end]) {
                return 0;
            }
            else {
                start++;
                end--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {
        
        //Faltu character hatao
        string temp = "";
        for(int i=0; i<s.length(); i++) { 
            if(valid(s[i])) {
                temp.push_back(s[i]);
            }
        }

        //lowercase me karo
        for(int i=0; i<temp.length(); i++) {
            temp[i] = toLowerCase(temp[i]);
        }

        //check palindrome
        return checkPalindrome(temp);
    }
};