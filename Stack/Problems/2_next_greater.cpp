#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Input: N = 11, A[] = {3,10,4,2,1,2,6,1,7,2,9}

// Output: 10,-1,6,6,2,6,7,7,9,9,10
class Solution{
    public:
    vector<int> nextGreaterElement(vector<int>& arr){
        vector<int>res (arr.size(),-1);
        stack<int>st;
        int n= res.size();

        for(int i=n-1;i>=0;i--){
            int ele = arr[i];
            while(!st.empty() && ele >= st.top()){
                st.pop();
            }
            if(!st.empty() && ele <st.top()){
                res[i] = st.top();
            }
            
           st.push(ele);
        }
        return res;
    }
    
};
int main()
{
    Solution s;
    
    vector<int> arr = {4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int> res = s.nextGreaterElement(arr) ;
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
    return 0;
}