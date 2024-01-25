#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int max_num =0;
        int value =0;
        for(int i =0;i<s.size();i++){
            // cout<<s[i]<<" ";
            if(isdigit(s[i])){
                value = value*10 + (s[i]-'0');
                cout<<value<<" ";
            }
            else if(value>0) {
                if(max_num<value ) {
                    max_num = value;
                    cout<<max_num<<" ";
                    value =0;
                }
                
                else return false; 
            }
        }
        if(value>0 ){
             return value<=max_num ? false:true;
        }
        return true;
       
    }
};