// ✅ Kadane’s algorithm (find max subarray and its range)
#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> ans){
    int global_max = INT_MIN, local_Max = INT_MIN;
    int n = ans.size();
    for(int i=0; i<n; i++){
        local_Max = max(local_Max+ans[i],ans[i]);
        global_max = max(local_Max,global_max);
    }
    return global_max;
}

//if localmax is greater than globalmax then update globalmax to localmax