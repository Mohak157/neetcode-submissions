class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<=r){

            if(alphanumeric(s[l]) == 0){
                l++;
                continue;
            }
             if(alphanumeric(s[r]) == 0){
                r--;
                continue;
            }
            if (tolower(s[l])==tolower(s[r])){
                l++;
                r--;
                
            }
            else{
                return false;
            }
        }
        return true;
    }

   bool alphanumeric(char c){
        return (c>='A' && c<='Z' ||c>='a' && c<='z' ||c>='0' && c<='9' );
    }
};
