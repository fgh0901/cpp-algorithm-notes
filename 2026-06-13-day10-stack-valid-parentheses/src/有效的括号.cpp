class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> m;
        m = {{'(',')'},{'{','}'},{'[',']'}};
        int n = s.size()%2;
        if(n == 1)return false;
        for (char i : s)
        {
            if(m.find(i)!=m.end())
            {
                st.push(i);
            }
            else
            {
                if(!st.empty())
                {
                    char temp = st.top();
                    if(i != m[temp])return false;
                    st.pop();
                }
                else
                {
                    return false;
                }
                
            }

        }
        if(st.empty())return true;
        return false;
        
    }
};