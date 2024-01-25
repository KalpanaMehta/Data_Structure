#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// longest subarray with sum k when it has only positive integers ;
class Solution{
    public :

    int longest_subarray(vector<int>arr, int n, int k){
       
        unordered_map<int,int>mp;
        int sum =0;
        int length=0;
        for(int i=0; i<arr.size(); i++){
           sum+=arr[i];

           if(sum==k){
            length =i;
           }
           else{
                int rem = sum-k ;
                if(mp.find(rem)!= mp.end()) {
                  int index  = mp[rem]; 
                  length = max(length,i-index)
;                }
           }
          
          if(mp.find(sum)==mp.end()) mp[sum]= i;
        }
        return length;

    }
};
int main()
{
    Solution obj;
    vector<int> arr={2,0,0,3,0};  
    int n = arr.size();
    int k =3;
    cout<<obj.longest_subarray(arr,n,k);
    return 0;
}