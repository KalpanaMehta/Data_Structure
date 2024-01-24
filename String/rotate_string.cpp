#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!= goal.size()) return false;
        string str = s+s;

        for(int i=0;i<str.size();i++){
            if( (str.substr(i,s.size()) ) == goal ) return true;
        }
        return false;
    }
};