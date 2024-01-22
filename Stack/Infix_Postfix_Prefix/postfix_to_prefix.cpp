#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        
        int i =0;
        stack<string>st;
        string result;
        
        while(i<post_exp.size()){
            
            string ch = "";
             ch += post_exp[i];
            
            
            if(isalpha(ch[0])){
                st.push(ch);
            }
            else { 
                string a = st.top();
                st.pop();
                
                string b = st.top();
                st.pop();
                
                result = ch + b + a;  //only change here
                st.push(result);
            }
            i++;
        }
        return result;
    }
};