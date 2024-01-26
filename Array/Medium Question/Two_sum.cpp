#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// using hashmap but if this question asking whethere we have two pair sum or not then also we can use greedy approach using two pointer .
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i =0;i<nums.size();i++){

            int ele = nums[i];
            int rem = target-ele;
            if( mp.find(rem)!=mp.end() ){
                return {{mp[rem],i}};
            }
            mp[ele]=i;
        }
        return {-1,-1};
    }
};