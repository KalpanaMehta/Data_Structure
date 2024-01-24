// using sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
       vector<pair<int, char>> arr('z'+1, {0, 0});
        string res="";
        for(auto ch:s){
            arr[ch] = {arr[ch].first+1,ch};
        }
        
     std::sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        for(auto p:arr){
            res += string(p.first,p.second);
        }
        return res;
    }
};