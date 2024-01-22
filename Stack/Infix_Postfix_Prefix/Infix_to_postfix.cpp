#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Infix_to_postfix
{

public:
    //function to check the precedence

     int prec_func(char c){
        if(c=='^') return 3;
        else if (c=='/' || c=='*') return 2;
        else if(c=='+' || c=='-') return 1;
        else return -1;
    }
    string infixToPostfix(string s)
{
    string ans;
    stack<char> st;
    
    
    for (int i = 0; i < s.size(); i++)
    {
         char ch= s[i];
        if (isalnum(ch))
        {
            ans += ch;
        }
       
   
       else if(ch=='(')
        {
            st.push(ch);
        }
            
        else if(ch==')'){
             while (st.top() != '(')
                {
                    int value = st.top();
                    ans += value;
                     st.pop();
                }
                st.pop();
        }
        else {
         
            while(!st.empty() && prec_func(ch) <= prec_func(st.top())){
                ans+= st.top();
                st.pop();
            }
            st.push(ch);
        }
                  
    }
     while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
     return ans;
    
}

  
};


