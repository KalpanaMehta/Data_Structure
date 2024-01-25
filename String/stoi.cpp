#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i =0;
        bool flag = true;
        long ans =0;
        while (s[i]==' ' && i< s.length() ) i++;
        if(s[i]=='-'){
            flag = false;
            i++;
        }
        else if(s[i]=='+') i++;

        while(i<s.length()){
            if(isdigit(s[i])){
                ans = ans * 10 + (s[i]-'0');
                if(ans>INT_MAX && !flag ) return INT_MIN;
                else if(ans>INT_MAX && flag) return INT_MAX;

            }
            else {
                return (flag)? ans : -ans;
            }
            i++;
        }
        return  (flag)? ans : -ans;

    }
};