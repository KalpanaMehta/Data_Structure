#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        int i= str.size()-1;
        int sign =1;
        long value =0;
       
        while(i>=0 ){
            if(isdigit(str[i])){
                int ele = str[i]-'0';
                value  = value * 10 + ele;
                if(value>INT_MAX) {
                   return value = 0;
                    
                } 
            }
            i--;
        }
      if(x>0) return value;
      else return (value*-1);

    }
};