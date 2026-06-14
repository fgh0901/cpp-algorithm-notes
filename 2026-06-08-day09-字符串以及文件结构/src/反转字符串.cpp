class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int left = 0;
        int right = 0;
        while(right < n)
        {
            if(right-left +1 == 2*k)
            {
                reverse(s.begin()+left,s.begin()+left+k);
                left = right +1;
            }
            else if(n - left  <k)
            {
                reverse(s.begin()+left,s.end());
                break;
            }
            else if((n - left >= k) && (n-left<2*k))
            {
                reverse(s.begin()+left,s.begin()+left+k);
                break;
            }
            right++;
        }
        return s;
        
    }
};