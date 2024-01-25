#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// longest subarray with sum k when it has both positive integers and negative;
class Solution{
    public :

    int longest_subarray(vector<int>arr, int n, int k){
       
        
        int i=0,j=0;
        int length=0;
        int sum  = 0;
        while (j<n)
        {
           sum += arr[j];

           while(sum>k && i<=j){
            sum -= arr[i];
                i++;
           }
           if(sum==k){
                length = max(length,j-i+1);
           }

        j++;
        }
     return length;
    }
};
int main()
{
    Solution obj;
    vector<int> arr={7,1,6,0};  
    int n = arr.size();
    int k =7;
    cout<<obj.longest_subarray(arr,n,k);
    return 0;
}