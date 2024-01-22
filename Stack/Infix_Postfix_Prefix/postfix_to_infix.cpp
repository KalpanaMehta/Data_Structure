#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string postToInfix(string exp) {
        // Write your code here
        int i =0;
        stack<string>st;
        
        while(i<exp.size()){
            
            string ch = "";
             ch += exp[i];
            
            
            if(isalpha(ch[0])){
                st.push(ch);
            }
            else { 
                string a = st.top();
                st.pop();
                
                string b = st.top();
                st.pop();
                st.push('(' + b + ch + a + ')');  // changing here to first according to logic and second to run fast because in gfg all case passing by this way 
            }
            i++;
        }
        return st.top();
    }
};
