class Solution {
public:
    bool isValid(string s) {
        stack<char> stacks;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                stacks.push(s[i]);
            
            else if(s[i]==')')
            {
                if (stacks.empty()|| stacks.top() != '(')
                     return false;
                 stacks.pop();
            }
           else if (s[i] == '}') 
           {
                if (stacks.empty() || stacks.top() != '{')
                    return false;
               stacks.pop();
          } 
          else
          {
                 if (stacks.empty() or stacks.top() != '[')
                    return false;
                stacks.pop();
          }
            
        
     }
        if(stacks.empty())
                return true;
            return false;
    }
    
};