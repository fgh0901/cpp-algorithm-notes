#include<iostream>
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string s;
        int n1 = word1.size();
        int n2 = word2.size();
        for(int i=0;i<n1||i<n2;i++)
        {
            if(i<n1)s+=word1[i];
            if(i<n2)s+=word2[i];
        }
        return s;
    }
};