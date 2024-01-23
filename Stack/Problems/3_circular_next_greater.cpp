#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1,2,1]
// Output: [2,-1,2]
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if(nums.size()==1){
            return {-1};
        }
        vector<int> res(nums.size(),-1);
        stack<int> st;
        int n = nums.size();
        for(int i = 2*n-1; i>=0;i--){
            int ele = nums[i%n];
            while(!st.empty() && ele >= st.top()){
                st.pop();
            }
            if(!st.empty() && ele < st.top()){
                res[i%n]= st.top();
            }
            st.push(nums[i%n]);
        }
        return res;
    }
};