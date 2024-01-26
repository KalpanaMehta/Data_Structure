#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        // sort(nums.begin(),nums.end());
        int left =0;
        int right =nums.size()-1;
        int curr=0;

        while(curr<=right){
            if(nums[curr]==0){
                swap(nums[left],nums[curr]);
                curr++;
                left++;
            }
            else if (nums[curr]==2 ){
                swap(nums[curr],nums[right]);
                right--;
            }
            else curr++;
        }
    }
};