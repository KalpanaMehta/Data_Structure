#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.size();
        int n2 = t.size(); 
        if(n1!= n2) return false;

        unordered_map<char,char>st1,st2;
     
        for(int i=0;i<n1;i++){
            if(st1[s[i]] &&  st1[s[i]]!= t[i]) return false;
            if(st2[t[i]] &&  st2[t[i]]!= s[i]) return false;
            st1[s[i]]=t[i];
            st2[t[i]] =s[i];
        }
        return true;
    }
};