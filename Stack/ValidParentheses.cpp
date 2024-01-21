// Whenever removing element always check if its empty or not
#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int i=0;
        if(s[i]== ')' || s[i]== ']' || s[i]== '}') return false;

        while(i<s.size()){
            if(s[i]== '(' || s[i]== '[' || s[i]== '{'){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                   
                }
                else return false; 
            }
             else if(s[i]==']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                   
                } 
                else return false;
            }
             else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                   
                } 
                else return false;
            }

        i++;
        }
        if(st.empty())
            return true;
        return false;
    }
};