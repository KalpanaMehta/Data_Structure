#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        int count =0;
        int i =0;
        while(i<s.size()){

            if(s[i]=='(' && count ==0){
                    count++;
            }
            else if(s[i]=='(' && count >=1){
                    str += s[i];
                    count++;
            } 
            else if(s[i]==')' && count > 1)
            {
                    str+=s[i];
                    count--;
            }
            else if(s[i]==')' && count==1){
                count=0;
            }
            i++;
        }
        return str;
    }
};