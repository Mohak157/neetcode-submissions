class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char,char> closetoopen={
            {')','('},
            {'}','{'},
            {']','['}
        };

        for (int i =0;i<s.length();i++){
            char c = s[i];
            if(closetoopen.count(c)){
                if(!stack.empty() && stack.top() == closetoopen[c]){
                    stack.pop();
                }
                else{
                    return false; 
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
