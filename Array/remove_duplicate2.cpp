#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;

        for(int j=0; j<nums.size();j++){

           if( i<2|| nums[i-2]!=nums[j]){
               nums[i]= nums[j];
               i++;
           }
        }
        return i;
    }
};
