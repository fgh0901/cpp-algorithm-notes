class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int n = tokens.size();
        for (int i = 0; i < n; i++) 
        {
            if (tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "-" &&tokens[i] != "/")s.push(stoi(tokens[i]));
            else 
            {
                if (tokens[i] == "+") 
                {
                    int temp = (s.top());
                    s.pop();
                    temp = (s.top()) + temp;

                    s.pop();
                    s.push(temp);
                } 
                else if (tokens[i] == "-") 
                {
                    int temp = (s.top());
                    s.pop();
                    temp = (s.top()) - temp;
                    s.pop();
                    s.push(temp);

                } 
                else if (tokens[i] == "*") 
                {
                    int temp = (s.top());
                    s.pop();
                    temp = (s.top()) * temp;
                    s.pop();
                    s.push(temp);

                } 
                else if (tokens[i] == "/") 
                {
                    int temp = (s.top());
                    s.pop();
                    temp = (s.top()) / temp;
                    s.pop();
                    s.push(temp);
                }
            }
        }
        return s.top();
    }
};