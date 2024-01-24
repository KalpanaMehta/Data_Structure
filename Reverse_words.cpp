#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string temp ="";
        string ans ="";

        for(int i =0;i<s.size();i++){

            if(s[i]!=' '){
                temp += s[i];
            }
            else {
                if(ans.empty()){
                    ans = temp;
                    temp ="";
                }
                else {
                    if(temp!=""){
                        ans = temp + " " + ans;
                        temp= "";
                    }
                    
                }
            }
           cout<<temp;
    
        }
        if(ans.empty()) ans = temp;
        else if(temp!="") ans = temp + " " + ans;
        return ans;
    }
};