#include<bits/stdc++.h>
using namespace std;

/*subarraysum formula
  
  subarraysum(i,j) = prefixSum[j]-prefixSum[i-1]
  and also
  k=prefixSum[j]-prefixSum[i-1]
  

*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
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
            
        }
        
    }
};

vector<int> a={2,3,1,2,4,3};
int target = 7;
