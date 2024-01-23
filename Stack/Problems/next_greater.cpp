#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res(nums1.size(),-1);
        stack<int>st;
        unordered_map<int,int>mp;

        for(int i =0; i<nums2.size(); i++){

            while( !st.empty() && nums2[i] > st.top() ){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push( nums2[i] );
        }
        for(int i =0; i<nums1.size(); i++){
            if( mp.find(nums1[i] )!=mp.end() ){
                    res[i] = mp[nums1[i]];
            }
        }
        return res;
    }
};
/* Here in this question I used unorderd map with stack .
so while iterating through the second array we are keeping a track of next greater element in map,
where we are pushing the element in stack and when moving to next element we are checking 
if that element is greater than the element present in stack or not because if its greater that means new element is 
the next greater element for the element present at top of stack .

the new element might be the  new next greater element for the element present below the top of stack
so we will remove and again check using while loop.
*/