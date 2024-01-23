#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int sum =0;
        stack<int>st;
        
        for(int i=0;i<height.size();i++){
            int curr_ele = height[i];
            // cout<<"curr"<<curr_ele<<" ";
            while(!st.empty() && curr_ele > height[st.top()] ){
                int top_index = height[st.top()];
                st.pop();
                if(st.empty()) {
                break;  
                }
                          
                int distance = i-st.top()-1;
                int bounded_height = min(height[st.top()],curr_ele) - top_index;
                    sum += distance * (bounded_height);
            }
            st.push(i);
            // cout<<"p"<<i<<" "<<height[i]<<" ";
        }
        return sum;
    }
};
