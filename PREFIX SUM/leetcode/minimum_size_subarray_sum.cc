#include<bits/stdc++.h>
using namespace std;

/*subarraysum formula
  
  subarraysum(i,j) = prefixSum[j]-prefixSum[i-1]
  and also
  k=prefixSum[j]-prefixSum[i-1]
  

*/

//560. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(int target, vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        vector<int> prefixSum(n,0);
        //prefix sum ka first index value is same as nums first index value
        prefixSum[0]=nums[0];
        //now calculate prefixSum array 
        for(int i=1; i<n; i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        //using un_ordered map O(1) to store prefix sum and its frequencies
        unordered_map<int,int> m;
        for(int j=0; j<n; j++){
            if(prefixSum[j]==target) cnt++;
            
            int val = prefixSum[j]-target;

            //check agar val map me exist krta hai toh uski freq cnt me add krdo
            if(m.find(val) != m.end()){
                cnt += m[val];
            }
            
            //check agr prefixsum ka jo values hai usko map me dalkr freq increase krdo
            if(m.find(prefixSum[j]) == m.end()){
                m[prefixSum[j]]=0;
            }
            m[prefixSum[j]]++;
        }
        return cnt;
    }
};

//209. Minimum Size Subarray Sum

class Solution{
public:
    int minSubArrayLen(int target , vector<int>& nums){
       int n = nums.size();
       vector<int> prefixSum(n,0);
       prefixSum[0]=nums[0];
       for(int i=1; i<n; i++){
        prefixSum[i]=prefixSum[i-1]+nums[i];
       }
       int left=0;
       int miniLen=INT_MAX;
       for(int right=0; right<n; right++){
        while(prefixSum[right]-(left>0 ? prefixSum[left-1]:0) >= target){
            miniLen=min(miniLen,right-left +1);
            left++;
        }
       }
       return (miniLen==INT_MAX ? 0 : miniLen);
    }
};
