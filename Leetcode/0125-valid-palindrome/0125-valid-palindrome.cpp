class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0, j=s.length()-1; i<j; i++,j--){
            //if s[i] is not Alphanumeric increase i by one and keep j as it
            if((s[i]<48 || s[i] > 57) && s[i] < 97 || s[i] > 122 || s[i]==' ' ){
                j++;
                continue;
              }
             //if s[j] is not Alphanumeric decrease j by one and keep i as it  
             if((s[j]<48 || s[j] > 57) && s[j] < 97 || s[j] > 122 || s[j]==' ' ){
                i--;
                continue;
              }
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
};