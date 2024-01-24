#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());

        string first = strs[0];    
        string second = strs[n-1];
        string res = "";
        for(int i=0; i<second.size(); i++){
            if(first[i] == second[i]) {
                res+= first[i];
            }
            else break;
        }
    return res;
    }
};