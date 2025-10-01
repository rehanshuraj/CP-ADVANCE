//2-D array
/*given 2d array a of n*n integers. given q queries and in each query given
a,b,c and d print sum of square represented by (a,b) as 
top left point and (c,d) as bottom right __SIZEOF_POINTER__

Constraints:
1<=n<=10^3
1<a[i][j]<=10^9
1<=q<=10^5
1<=a,b,c,d<=n
*/

#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10; //represent 1000
int ar[n][n];
long long pf[n][n];
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n; j++){
            cin>>ar[i][j];
            pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum=0;
        //calculate sum using prefix sum array
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
        
        //pf[a-1][b-1] is subtracted twice so we add it once
       
        //brute force approach
        // for(int i=a; i<=c; i++){
        //     for(int j=b; j<=d; j++){
        //         sum+=ar[i][j];
        //     }
        // }
        cout<<sum<<endl;
    }
}