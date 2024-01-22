#include<iostream>
#include<bits/stdc++.h>
// samething that we did in prefix to infix .
using namespace std;
class Solution {
  public:
    string preToPost(string pre_exp) {
       stack<string>st;
       int i= pre_exp.size()-1;
       
       string result;
       
       while(i>=0){
           
           string ans="";
           ans+= pre_exp[i];
           
           if(isalpha(ans[0])){
               st.push(ans);
           }
           else{
               string a = st.top();
               st.pop();
               
               string b= st.top();
               st.pop();
               
               result = a + b + ans ;
               st.push(result);
           }
           
           i--;
       }
       return result;
    }
};