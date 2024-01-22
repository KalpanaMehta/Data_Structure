#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string> st;
        string result;
        int i = pre_exp.size()-1;
        // iterating the whole expression one by one
        while(i>=0){
            string ch= "";
            ch += pre_exp[i];
            
            //checking the alphabets and number and pushing it to stack

           if(isalnum(ch[0])){
                st.push(ch);
            }

            // else part code means there is operator so we pop out two operands from 
            // the stack , push the result (operand_ operator_operarnd)into stack.
            else{
                
                    string a = st.top();
                    st.pop();
                    string b = st.top();
                    st.pop();
                    result = "(" + a + ch + b + ")";
                    st.push(result);
                
                
            }
            i--;
        }
        return st.top();
        
    }
};